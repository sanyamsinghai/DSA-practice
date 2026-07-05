class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        running = [0] * len(nums)
        running[0] = nums[0]

        for i in range(1, len(nums)):
            running[i] = running[i - 1] + nums[i]

        return running
