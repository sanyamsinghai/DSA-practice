class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int count=0;
        for(int l=0;l<nums.size();l++){
            for(int r=l+1;r<nums.size();r++){
                if(nums[l]+nums[r] < target)count++;
            }
        }
        return count;

    }
};