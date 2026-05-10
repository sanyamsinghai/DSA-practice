class Solution:
    def concatWithReverse(self, nums: list[int]) -> list[int]:

        a1 = nums[::-1]
        return nums + a1
