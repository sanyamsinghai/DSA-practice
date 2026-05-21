class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            bool flag = true;
            int temp = i;
            int digit;
            while (temp) {
                digit = temp % 10;
                if (digit == 0 || i % digit != 0) {
                    flag = false;
                    break;
                }
                temp = temp / 10;
            }
            if (flag == true) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};