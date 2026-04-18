class Solution {
public:
    int reverse(int a) {
        int digit = 0;
        while (a) {
            int rem = a % 10;
            digit = digit * 10 + rem;
            a = a / 10;
        }
        return digit;
    }

    int mirrorDistance(int n) { return abs(n - reverse(n)); }
};