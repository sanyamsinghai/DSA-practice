class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        maxi = 0
        d = {}
        i = 0

        for j in range(len(nums)):
            if nums[j] in d:
                d[nums[j]] += 1
            else:
                d[nums[j]] = 1

            while d[nums[j]] > k:
                d[nums[i]] -= 1
                i += 1

            maxi = max(maxi, j - i + 1)

        return maxi
