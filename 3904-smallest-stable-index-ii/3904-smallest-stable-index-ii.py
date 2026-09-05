class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n = len(nums)

        maxi = [0] * n
        mini = [0] * n
        temp = [0] * n

        ma = float('-inf')

        for i in range(n):
            ma = max(ma, nums[i])
            maxi[i] = ma

        mi = float('inf')

        for i in range(n - 1, -1, -1):
            mi = min(mi, nums[i])
            mini[i] = mi

        for i in range(n):
            temp[i] = maxi[i] - mini[i]

        for i in range(n):
            if temp[i] <= k:
                return i

        return -1