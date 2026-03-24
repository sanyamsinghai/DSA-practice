class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt_zero = 0;
        int cnt_one = 0;
        int cnt_two = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                cnt_zero++;
            } else if (nums[i] == 1) {
                cnt_one++;
            } else {
                cnt_two++;
            }
        }
        int i = 0;
        while (cnt_zero) {
            nums[i] = 0;
            i++;
            cnt_zero--;
        }
        while (cnt_one) {
            nums[i] = 1;
            i++;
            cnt_one--;
        }
        while (cnt_two) {
            nums[i] = 2;
            i++;
            cnt_two--;
        }
    }
};