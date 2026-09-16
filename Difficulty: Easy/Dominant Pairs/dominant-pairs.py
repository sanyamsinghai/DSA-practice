class Solution:
    def dominantPairs(self, arr: list[int]) -> int:
        # code here
        half = len(arr) // 2
        lower = sorted(arr[:half])
        upper = sorted(arr[half:])
        i = count = 0
        for val in lower:
            while i < half and val >= 5 * upper[i]:
                i += 1
            count += i
        return count