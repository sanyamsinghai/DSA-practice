class Solution:
    def countPS(self, s):
        # code here
        count = 0

        def expand(left, right):
            res = 0
            while left >= 0 and right < len(s) and s[left] == s[right]:
                # Only count if length >= 2
                if right - left + 1 >= 2:
                    res += 1
                left -= 1
                right += 1
            return res

        for i in range(len(s)):
            count += expand(i, i)       # Odd
            count += expand(i, i + 1)   # Even

        return count