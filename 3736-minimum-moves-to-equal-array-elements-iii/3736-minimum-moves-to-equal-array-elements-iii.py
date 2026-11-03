class Solution:
    def minMoves(self, nums: List[int]) -> int:
        temp = 0
        maxi = max(nums)
        for i in nums:
            temp += maxi - i

        return temp
