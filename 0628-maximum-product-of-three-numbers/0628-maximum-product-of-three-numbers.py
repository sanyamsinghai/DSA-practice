class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        # temp = sorted(nums)
        # ans1 = temp[0] * temp[1] * temp[-1]
        # ans2 = temp[-1] * temp[-2] * temp[-3]
        # return max(ans1, ans2)

        largest = float("-inf")
        s_largest = float("-inf")
        t_largest = float("-inf")

        smallest = float("inf")
        s_smallest = float("inf")

        for x in nums:
            if x >= largest:
                t_largest = s_largest
                s_largest = largest
                largest = x
            elif x >= s_largest:
                t_largest = s_largest
                s_largest = x
            elif x > t_largest:
                t_largest = x

            if x <= smallest:
                s_smallest = smallest
                smallest = x
            elif x < s_smallest:
                s_smallest = x

        ans1 = largest * s_largest * t_largest
        ans2 = smallest * s_smallest * largest

        return max(ans1, ans2)
