class Solution:
    def getLongestPal(self, s):
        # code here
        ans = ""
        l = 0
        for i in range(len(s)):
            # odd
            left = i
            right = i
            while ((left >= 0 and right < len(s)) and (s[left] == s[right])):
                left -= 1
                right += 1
            if right - left - 1 > l:
                l = right - left - 1
                ans = s[left+1 : right]
    
            # even
            left = i
            right = i + 1
            while (left >= 0 and right < len(s)) and (s[left] == s[right]):
                left -= 1
                right += 1
            if right - left - 1 > l:
                l = right - left - 1
                ans = s[left+1 : right]
        return ans