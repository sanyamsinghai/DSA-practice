class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        maxi = 0
        d = {}
        i = 0

        for j in range(len(s)):
            if s[j] in d:
                d[s[j]] += 1
            else:
                d[s[j]] = 1

            while d[s[j]] > 2:
                d[s[i]] -= 1
                i += 1

            maxi = max(maxi, j - i + 1)

        return maxi