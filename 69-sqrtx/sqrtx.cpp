class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;

        int ans = 0;

        if (x == 0 || x == 1) return x;

        while (low <= high) {
            long long  mid = low + (high - low) / 2;

            if ((mid*mid) <= x) { // if mid*mid<=x then mid may be the answer so we store it
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }
};