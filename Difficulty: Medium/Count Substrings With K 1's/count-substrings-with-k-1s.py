class Solution:
    def KOneSubstr(self, s, k):
        j = 0
        ones = 0
        cnt = 0
        zeros = 0

        if k == 0:
            for i in range(len(s)):
                if s[i] == '1':
                    zeros = 0
                else:
                    zeros += 1

                cnt += zeros

            return cnt

        for i in range(len(s)):
            if s[i] == '1':
                ones += 1
                zeros = 0

            while ones > k:
                if s[j] == '1':
                    ones -= 1
                j += 1

            if ones == k:
                while j <= i and s[j] == '0':
                    zeros += 1
                    j += 1

                cnt += zeros + 1

        return cnt
