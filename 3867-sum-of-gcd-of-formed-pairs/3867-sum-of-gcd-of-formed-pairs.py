class Solution:
    def gcdSum(self, nums: list[int]) -> int:
        maxi = [0] * len(nums)
        prefix = [0] * len(nums)

        maxi[0] = nums[0]
        prefix[0] = nums[0]

        for i in range(1, len(nums)):
            maxi[i] = max(maxi[i - 1], nums[i])
            prefix[i] = math.gcd(nums[i], maxi[i])

        left = 0
        right = len(prefix) - 1
        prefix.sort()
        ans = 0
        while left < right:
            temp = math.gcd(prefix[left], prefix[right])
            ans += temp
            left += 1
            right -= 1

        return ans
