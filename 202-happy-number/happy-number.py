class Solution:
    def get_sum_sq(self, num: int) -> int:
        sum_sq = 0
        while num != 0:
            digit = num % 10
            sum_sq = sum_sq + (digit**2)
            num = num // 10
        return sum_sq

    def isHappy(self, n: int) -> bool:
        sett = set()
        while n != 1:
            if n in sett:
                return False
            else:
                sett.add(n)
                n = self.get_sum_sq(n)
        return True
