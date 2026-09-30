class Solution:
    def NcR(self, n, r):
        res = 1

        for i in range(r):
            res = res * (n - i)
            res = res // (i + 1)

        return res

    def generate(self, numRows: int) -> list[list[int]]:
        ans = []

        for i in range(1, numRows + 1):
            temp = []
            for j in range(1, i + 1):
                temp.append(self.NcR(i - 1, j - 1))
            ans.append(list(temp))

        return ans
