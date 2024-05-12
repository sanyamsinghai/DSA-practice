class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int st = 0;
        int end = n - 1;

        int ans = n;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] >= target) {
                ans = mid;
                end = mid - 1;
            } else {
                st = mid + 1;
            }
        }
        return ans;
    }
};