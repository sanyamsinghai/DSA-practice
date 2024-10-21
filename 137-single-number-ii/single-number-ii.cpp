class Solution {
public:
    int singleNumber(vector<int>& nums) {

        // approach 1 - using map
        /*

        unordered_map<int,int> mapp;
        for(int i=0 ; i<nums.size() ; i++){
            mapp[nums[i]]++;
        }
        for(auto it:mapp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
        */

        /*
        //approach -2
        sort(nums.begin(),nums.end());
        for(int i=1 ; i<nums.size() ; i+=3){
            if(nums[i]!=nums[i-1]){
                return nums[i-1];
            }
        }
        return nums[nums.size()-1];
        */

        // approach 3
        int ans = 0;

        for (int bitIndex = 0; bitIndex < 32; bitIndex++) {
            int cnt = 0;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] & (1 << bitIndex)) {
                    cnt++;
                }
            }
            if (cnt % 3 == 1) {
                ans = ans | (1 << bitIndex);
            }
        }
        return ans;
    }
};