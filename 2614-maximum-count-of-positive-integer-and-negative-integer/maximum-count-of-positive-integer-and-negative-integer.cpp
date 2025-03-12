class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cntPositive = 0;
        int cntNegative = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                cntPositive++;

            else if (nums[i] < 0)
                cntNegative++;
        }
        if (cntPositive >= cntNegative)
            return cntPositive;

        return cntNegative;
    }
};