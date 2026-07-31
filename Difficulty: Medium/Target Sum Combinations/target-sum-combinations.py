class Solution:
    def targetSumComb(self, arr, target):
        # code here
        def check(i, nums, target, ans, ds):
            if i == len(nums):
                if target == 0:
                    ans.append(list(ds))
                return

            if nums[i] <= target:
                ds.append(nums[i])
                check(i, nums, target - nums[i], ans, ds)
                ds.pop()

            check(i + 1, nums, target, ans, ds)

        ans = []
        check(0, arr, target, ans, [])
        return ans