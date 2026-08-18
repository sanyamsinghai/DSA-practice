class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        window_count = {}
        n = len(nums)

        for i in range(n - k + 1):

            seen = set()

            for j in range(i, i + k):
                seen.add(nums[j])

            for x in seen:
                if x in window_count:
                    window_count[x] += 1
                else:
                    window_count[x] = 1

        ans = -1

        for x in window_count:
            if window_count[x] == 1:
                ans = max(ans, x)

        return ans

                           
                