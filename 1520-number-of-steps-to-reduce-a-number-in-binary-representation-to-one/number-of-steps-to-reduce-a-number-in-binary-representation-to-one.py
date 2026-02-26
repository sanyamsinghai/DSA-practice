class Solution:
    def numSteps(self, s: str) -> int:
        decimal = int(s, 2)
        cnt = 0
        while decimal != 1:
            if decimal % 2 == 1:
                decimal += 1
                cnt += 1
            else:
                decimal = decimal // 2
                cnt += 1
        return cnt
