class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            
            if (nums[low] + nums[high] == target) {
                return {low + 1, high + 1};
            } 
            else if (nums[low] + nums[high] < target) {
                low++;
            } 
            else {
                high--;
            }
        }
        return {-1, -1};
    }
};