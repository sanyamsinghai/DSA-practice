class Solution:
    def digitSum(self, s: str, k: int) -> str:
        while len(s) > k:
            total = ""
            for i in range(0, len(s), k):
                temp = s[i : i + k]
                add = 0
                for j in temp:
                    add += int(j)
                total += str(add)
            s = total
        return s
