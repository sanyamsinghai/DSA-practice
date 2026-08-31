class Solution:
    def maxEvenOdd(self, arr):
        #code here
        if not arr:
            return 0

        curr = 1
        ans = 1

        for i in range(1, len(arr)):
            if arr[i] % 2 != arr[i - 1] % 2:
                curr += 1
            else:
                curr = 1

            ans = max(ans, curr)

        return ans