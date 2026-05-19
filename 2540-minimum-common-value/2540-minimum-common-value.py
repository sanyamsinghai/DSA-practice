class Solution:
    def getCommon(self, nums1: List[int], nums2: List[int]) -> int:
        i = 0
        j = 0
        mini = -1
        while i < len(nums1) and j < len(nums2):
            if nums1[i] == nums2[j]:
                mini = nums1[i]
                return mini
            elif nums1[i] < nums2[j]:
                i += 1
            else:
                j += 1
        return mini
