class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        smaller = []
        greater = []
        equal = []

        for i in nums:
            if i < pivot:
                smaller.append(i)
            elif i == pivot:
                equal.append(i)
            else:
                greater.append(i)

        return smaller + equal + greater
