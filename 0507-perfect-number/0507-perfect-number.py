class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        if num <= 1:
            return False

        sum_divisors = 1
        sqrt_num = int(math.sqrt(num))

        for i in range(2, sqrt_num + 1):
            if num % i == 0:
                sum_divisors += i
                paired = num // i
                if paired != i:
                    sum_divisors += paired

        return sum_divisors == num
