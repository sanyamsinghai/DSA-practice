class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ""
        i=0
        while i < len(s):
            start = i
            while i < len(s) and s[i] != " ":
                i += 1
            k = i - 1
            while k >= start:
                ans += s[k]
                k -= 1
            if i < len(s):
                ans += " "
            i+=1
        return ans
