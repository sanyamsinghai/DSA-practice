class Solution:
    def gcdOfOddEvenSums(self, n: int) -> int:
        sumOdd = n * n
        sumEven = n * (n + 1)

        mini = min(sumOdd, sumEven)
        for i in range(mini, 0, -1):
            if sumOdd % i == 0 and sumEven % i == 0:
                return i
