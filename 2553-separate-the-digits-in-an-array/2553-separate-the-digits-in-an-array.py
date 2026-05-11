class Solution:
    def separateDigits(self, nums: List[int]) -> List[int]:
        ans = []

        for i in range(len(nums)):
            el = nums[i]
            temp = []
            while el != 0:
                digit = el % 10
                temp.append(digit)
                el = el // 10
            temp.reverse()
            for j in temp:
                ans.append(j)
        return ans
