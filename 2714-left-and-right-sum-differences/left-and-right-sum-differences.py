class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        left_sum = [0] * len(nums)
        right_sum = [0] * len(nums)
        ans = [0] * len(nums)

        l_sum = 0
        for i in range(len(nums)):
            left_sum[i] = l_sum
            l_sum += nums[i]

        r_sum = 0
        for i in range(len(nums) - 1, -1, -1):
            right_sum[i] = r_sum
            r_sum += nums[i]

        for i in range(len(nums)):
            ans[i] = abs(left_sum[i] - right_sum[i])
        return ans
