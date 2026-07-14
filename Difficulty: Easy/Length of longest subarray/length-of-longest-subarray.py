class Solution:
    def longestSubarray(self, arr):
        # code here
        l = 0
        maxi = 0
        for i in range(len(arr)):
            if arr[i]>=0:
                l+=1
                maxi = max(maxi,l)
            else:
                l=0
        return maxi
    