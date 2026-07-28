class Solution:
    def smallestPalindrome(self, s: str) -> str:
        # d = {}
        # ans = ""
        # for i in range(len(s) // 2):
        #     if s[i] in d:
        #         d[s[i]] += 1
        #     else:
        #         d[s[i]] = 1

        # temp = ""
        # for ch in sorted(d):
        #     temp += ch * d[ch]
        # temp2 = temp[::-1]

        # if len(s) % 2 == 0:
        #     ans = temp + temp2
        # else:
        #     ans = temp + s[len(s) // 2] + temp2

        # return ans

        d = {}
        ans = ""
        for i in range(len(s) // 2):
            if s[i] in d:
                d[s[i]] += 1
            else:
                d[s[i]] = 1
                
        temp = []
        for i in range(26):
            ch = chr(ord("a") + i)
            if ch in d:
                temp.append(ch * d[ch])

        left = "".join(temp)
        if len(s) % 2 == 0:
            ans = left + left[::-1]
        else:
            ans = left + s[len(s) // 2] + left[::-1]

        return ans
