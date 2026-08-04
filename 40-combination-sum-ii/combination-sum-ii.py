class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        def check(ind, nums, target, ans, ds):
            if target == 0:
                ans.append(list(ds))
                return

            for i in range(ind, len(nums)):
                if i > ind and nums[i] == nums[i - 1]:
                    continue
                if nums[i] > target:
                    break
                ds.append(nums[i])
                check(i + 1, nums, target - nums[i], ans, ds)
                ds.pop()

        candidates.sort()
        ans = []
        check(0, candidates, target, ans, ds=[])
        return ans
