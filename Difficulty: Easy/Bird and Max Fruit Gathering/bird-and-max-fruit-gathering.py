class Solution:
    def maxFruits(self, arr: list[int], m: int) -> int:
        """ code here """
        n = len(arr)

        window_sum = 0
        for i in range(m):
            window_sum += arr[i]

        maxi = window_sum

        for i in range(1, n):
            window_sum -= arr[i - 1]
            window_sum += arr[(i + m - 1) % n]

            maxi = max(maxi, window_sum)

        return maxi