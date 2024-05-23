class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        // sort(nums.begin(),nums.end());
        // for(int i=0 ; i<nums.size() ; i++){
        //     if(nums[i]==target){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;

        int countless=0;
        int countequal=0;

        for(int i=0 ; i<nums.size() ; i++){
            if(nums[i]<target){
                countless++;
            }
            else if(nums[i]==target){
                countequal++;
            }
        }

        for(int i=0 ; i<countequal ; i++){
            ans.push_back(countless+i);
        }
        return ans;
    }
};