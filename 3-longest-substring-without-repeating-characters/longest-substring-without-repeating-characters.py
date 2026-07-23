class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        i = 0
        j = 0
        d = {}
        maxi = 0
        while i < len(s) and j < len(s):
            if s[j] in d:
                i = max(i, d[s[j]] + 1)

            maxi = max(maxi, j - i + 1)
            d[s[j]] = j
            j += 1
        return maxi
