class Solution:
    def countPrimes(self, n: int) -> int:
        if n < 2:
            return 0

        prime = [1] * n
        prime[0] = prime[1] = 0

        limit = int(math.sqrt(n) + 1)

        for i in range(2, limit):
            if prime[i]:
                for j in range(i * i, n, i):
                    prime[j] = 0

        cnt = 0
        for i in prime:
            if i == 1:
                cnt += 1

        return cnt
