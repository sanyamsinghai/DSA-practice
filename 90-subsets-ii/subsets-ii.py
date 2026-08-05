class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        def check(ind, nums, ds, ans):
            ans.append(list(ds))
            for i in range(ind, len(nums)):
                if i != ind and nums[i] == nums[i - 1]:
                    continue
                ds.append(nums[i])
                check(i + 1, nums, ds, ans)
                ds.pop()

        nums.sort()
        ans = []
        check(0, nums, [], ans)
        return ans
