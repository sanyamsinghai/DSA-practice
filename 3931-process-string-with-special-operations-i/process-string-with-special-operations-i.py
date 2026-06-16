class Solution:
    def processStr(self, s: str) -> str:
        ans = ""
        for i in range(len(s)):
            if s[i] == "*":
                temp = ans[:-1]
                ans = temp
            elif s[i] == "#":
                temp = ans + ans
                ans = temp
            elif s[i] == "%":
                temp = ans[::-1]
                ans = temp
            else:
                ans += s[i]
        return ans
