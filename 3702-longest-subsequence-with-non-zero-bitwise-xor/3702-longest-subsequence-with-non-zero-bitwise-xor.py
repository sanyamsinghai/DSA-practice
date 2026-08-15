class Solution:
    def longestSubsequence(self, nums: List[int]) -> int:
        ans = len(nums)
        not_zero = 0
        x = 0

        for i in nums:
            x ^= i
            if i != 0:
                not_zero += 1

        if x != 0:
            return ans
        if not_zero == 0:
            return 0
        return ans - 1
