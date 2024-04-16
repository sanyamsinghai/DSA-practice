class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mapp;
        int ans=0;
        for(int i=0 ; i<nums.size() ; i++){
            mapp[nums[i]]++;
        
            if(mapp[nums[i]]>1){
                ans=nums[i];
                break;
            }
        }
        return ans;
    }
};