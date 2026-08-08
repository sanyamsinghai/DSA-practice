class Solution:
    def medianOf2(self, nums1, nums2):
        # code here
        ans = []

        i = 0
        j = 0
    
        while i < len(nums1) and j < len(nums2):
            if nums1[i] < nums2[j]:
                ans.append(nums1[i])
                i += 1
            else:
                ans.append(nums2[j])
                j += 1
    
        while i < len(nums1):
            ans.append(nums1[i])
            i += 1
    
        while j < len(nums2):
            ans.append(nums2[j])
            j += 1
    
        mid = len(ans) // 2
    
        if len(ans) % 2 == 0:
            return (ans[mid] + ans[mid - 1]) / 2.0
        else:
            return ans[mid]
            