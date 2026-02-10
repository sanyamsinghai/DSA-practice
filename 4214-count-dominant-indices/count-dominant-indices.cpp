class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int totalSum = 0;
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }
        for (int j = 0; j < nums.size() - 1; j++) {
            int el = nums[j];
            totalSum -= el;
            int right_sum = totalSum;
            if (el > right_sum / (nums.size() - j - 1)) {
                cnt++;
            }
        }
        return cnt;
    }
};