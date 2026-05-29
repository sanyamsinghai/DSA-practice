class Solution:

    def digit_sum(self, n):
        add = 0
        while n:
            digit = n % 10
            add += digit
            n = n // 10
        return add

    def minElement(self, nums: List[int]) -> int:
        mini = float("inf")
        for i in range(len(nums)):
            nums[i] = self.digit_sum(nums[i])
            mini = min(mini, nums[i])
        return mini
