class Solution:
    def missingNumber(self, nums):
        # code here
        n = len(nums)
        temp = [-1] * (n + 1)

        for i in range(n):
            if 1 <= nums[i] <= n:
                temp[nums[i]] = 1

        for i in range(1, n + 1):
            if temp[i] == -1:
                return i

        return n + 1