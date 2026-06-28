class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        j = 0
        k = n
        ans = []

        while j < n and k < len(nums):
            ans.append(nums[j])
            ans.append(nums[k])
            j += 1
            k += 1
        return ans
