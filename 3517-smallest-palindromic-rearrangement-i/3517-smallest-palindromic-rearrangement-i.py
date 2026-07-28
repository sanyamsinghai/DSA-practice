class Solution:
    def smallestPalindrome(self, s: str) -> str:
        d = {}
        ans = ""
        for i in range(len(s) // 2):
            if s[i] in d:
                d[s[i]] += 1
            else:
                d[s[i]] = 1

        temp = ""
        for ch in sorted(d):
            temp += ch * d[ch]
        temp2 = temp[::-1]

        if len(s) % 2 == 0:
            ans = temp + temp2
        else:
            ans = temp + s[len(s) // 2] + temp2

        return ans
