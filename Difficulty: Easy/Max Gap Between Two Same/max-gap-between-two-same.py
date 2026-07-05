class Solution:

    def maxCharGap(self, s: str) -> int:
        # code here
        first = [-1] * 26
        ans = -1
    
        for i in range(len(s)):
            idx = ord(s[i]) - ord('a')
    
            if first[idx] == -1:
                first[idx] = i
            else:
                ans = max(ans, i - first[idx] - 1)
    
        return ans