class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        # #brute force appraoch
        # ans = []
        # for i in range(len(nums)):
        #     left_p = 1
        #     right_p = 1
        #     for j in range(0, i):
        #         left_p *= nums[j]
        #     for j in range(i + 1, len(nums)):
        #         right_p *= nums[j]
        #     ans.append(left_p * right_p)
        # return ans

        # optimal approach
        prefix = [1] * len(nums)
        for i in range(1, len(nums)):
            prefix[i] = prefix[i - 1] * nums[i - 1]

        suffix = [1] * len(nums)
        for i in range(len(nums) - 2, -1, -1):
            suffix[i] = suffix[i + 1] * nums[i + 1]

        ans = [0] * len(nums)
        for i in range(len(nums)):
            ans[i] = prefix[i] * suffix[i]
        return ans
