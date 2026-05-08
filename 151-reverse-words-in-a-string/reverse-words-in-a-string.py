class Solution:
    def reverseWords(self, s: str) -> str:
        ans = ""

        i = len(s) - 1
        while i >= 0:
            while i >= 0 and s[i] == " ":
                i -= 1

            if i < 0:
                break

            j = i
            while j >= 0 and s[j] != " ":
                j -= 1

            ans += s[j + 1 : i + 1]
            ans += " "

            i = j - 1

        return ans[:-1]
