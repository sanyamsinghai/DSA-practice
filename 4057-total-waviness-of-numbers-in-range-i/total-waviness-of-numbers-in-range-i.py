class Solution:
    def get_digits(self, n):
        arr = []
        while n:
            digit = n % 10
            arr.append(digit)
            n = n // 10
        return arr

    def totalWaviness(self, num1: int, num2: int) -> int:
        ans = 0
        for i in range(num1, num2 + 1):
            digits = self.get_digits(i)
            cnt = 0
            for j in range(1, len(digits) - 1):
                if (
                    digits[j] > digits[j - 1]
                    and digits[j] > digits[j + 1]
                    or digits[j] < digits[j - 1]
                    and digits[j] < digits[j + 1]
                ):
                    cnt += 1
            ans += cnt
        return ans
