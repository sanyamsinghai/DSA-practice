class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        j = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                continue
            else:
                nums[j], nums[i] = nums[i], nums[j]
                j += 1
