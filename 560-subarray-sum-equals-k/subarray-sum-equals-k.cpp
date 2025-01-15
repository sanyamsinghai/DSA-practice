class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int cnt = 0;

        for (int i = 0; i < arr.size(); i++) {
            int sum = 0;

            for (int j = i; j < arr.size(); j++) {
                sum += arr[j];
                if (sum == k) {
                    cnt += 1;
                }
            }
        }
        return cnt;
    }
};