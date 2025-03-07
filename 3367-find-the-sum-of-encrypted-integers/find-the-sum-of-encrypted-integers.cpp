class Solution {
public:
    int encrypt(int x) {
        int rem;
        int maxi = 0;
        int cnt = 0;
        int newDigit = 0;
        while (x != 0) {
            rem = x % 10;
            maxi = max(maxi, rem);
            x = x / 10;
            cnt++;
        }
        while (cnt) {
            newDigit = newDigit * 10 + maxi;
            cnt--;
        }
        return newDigit;
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int replace = encrypt(nums[i]);
            nums[i] = replace;
            sum += nums[i];
        }
        return sum;
    }
};