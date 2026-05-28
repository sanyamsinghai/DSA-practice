class Solution:

    def get_digits(self, n):
        cnt = 0
        while n:
            digit = n % 10
            cnt += 1
            n = n // 10
        return cnt

    def findNumbers(self, nums: List[int]) -> int:
        count = 0
        for i in range(len(nums)):
            if self.get_digits(nums[i]) % 2 == 0:
                count += 1
        return count
