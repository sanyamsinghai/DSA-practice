class Solution:
    def findWords(self, words: list[str]) -> list[str]:
        first = 'qwertyuiop'
        second = 'asdfghjkl'
        third = 'zxcvbnm'

        ans = []

        for ch in words:
            temp = ch.lower()

            if temp[0] in first:
                row = first
            elif temp[0] in second:
                row = second
            else:
                row = third

            for i in range(1, len(temp)):
                if temp[i] not in row:
                    break
            else:
                ans.append(ch)

        return ans