class Solution:
    def threeSum(self, arr: list[int]) -> list[list[int]]:
        n = len(arr)
        arr.sort()
        ans = []

        for i in range(n - 2):
            if i > 0 and arr[i] == arr[i - 1]:
                continue

            left = i + 1
            right = n - 1

            while left < right:
                total = arr[i] + arr[left] + arr[right]
                if total == 0:
                    ans.append([arr[i], arr[left], arr[right]])

                    while left < right and arr[left] == arr[left + 1]:
                        left += 1

                    while left < right and arr[right] == arr[right - 1]:
                        right -= 1

                    left += 1
                    right -= 1

                elif total < 0:
                    left += 1
                else:
                    right -= 1
        return ans
