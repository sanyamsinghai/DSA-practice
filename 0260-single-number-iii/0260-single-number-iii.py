class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        d = {}
        for i in range(len(nums)):
            if nums[i] in d:
                d[nums[i]] += 1
            else:
                d[nums[i]] = 1

        ans = []
        for i in d:
            if d[i] == 1:
                ans.append(i)
        return ans
