class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = {}
        n = len(nums)
        for i in nums:
            if i in freq:
                freq[i] += 1
            else:
                freq[i] = 1
        for key in freq:
            if freq[key] > n / 2:
                return key
        return -1
