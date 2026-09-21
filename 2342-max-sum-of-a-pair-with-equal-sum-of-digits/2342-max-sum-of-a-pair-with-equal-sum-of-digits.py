class Solution:
    def checkSumOfDigit(self, n):
        total = 0
        while n != 0:
            rem = n % 10
            total += rem
            n = n // 10
        return total

    def maximumSum(self, nums):
        mapp = {}
        maxSum = -1

        for num in nums:
            digit_sum = self.checkSumOfDigit(num)

            if digit_sum in mapp:
                maxSum = max(maxSum, mapp[digit_sum] + num)

            mapp[digit_sum] = max(mapp.get(digit_sum, 0), num)

        return maxSum
