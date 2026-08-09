class Solution:
    def power(self, x: float, n: int) -> float:
        # Code Here
        if n == 0:
            return 1

        if n < 0:
            return 1 / self.power(x, -n)

        if n % 2 == 0:
            half = self.power(x, n // 2)
            return half * half

        return x * self.power(x, n - 1)