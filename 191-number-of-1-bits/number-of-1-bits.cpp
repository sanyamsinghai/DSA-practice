class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while (n > 1) {
            cnt += n & 1;
            n = n >> 1;
        }
        if (n == 1)cnt += 1;
        return cnt;
    }
};