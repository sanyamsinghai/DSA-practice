class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int element=nums.size()-k;
        return nums[element];
    }
};