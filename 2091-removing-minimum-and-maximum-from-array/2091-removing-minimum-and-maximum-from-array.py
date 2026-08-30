class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        mini = float("inf")
        maxi = float("-inf")

        max_ind = 0
        min_ind = 0

        for i in range(len(nums)):
            if nums[i] > maxi:
                maxi = nums[i]
                max_ind = i
            if nums[i] < mini:
                mini = nums[i]
                min_ind = i

        case1 = max(max_ind, min_ind) + 1
        case2 = len(nums) - min(max_ind, min_ind)

        left = min(max_ind, min_ind)
        right = max(max_ind, min_ind)

        case3 = (left + 1) + (len(nums) - right)

        temp = min(case1, case2)
        ans = min(temp, case3)

        return ans
