class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        mapp = {}

        for num in nums:
            mapp[num] = mapp.get(num, 0) + 1

        for key, value in mapp.items():
            if value == 1:
                return key

        return -1