class Solution {
public:
    bool checkPrime(int n) {
        if (n < 2) {
            return false;
        }
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    int cntSetBits(int n) {
        int cnt = 0;
        while (n > 1) {
            cnt += n & 1;
            n = n >> 1;
        }
        if (n == 1) {
            cnt++;
        }
        return cnt;
    }

    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            int setBits = cntSetBits(i);
            if (checkPrime(setBits)) {
                count++;
            }
        }
        return count;
    }
};