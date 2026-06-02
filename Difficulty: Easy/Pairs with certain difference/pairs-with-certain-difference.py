class Solution:
    def sumDiffPairs(self, arr, k):
        # code here
        arr.sort()
        sum = 0
        i=len(arr)-1
        while i>0:
            if arr[i]-arr[i-1]<k:
                sum+=arr[i]+arr[i-1]
                i-=2
            else:
                i-=1
        return sum
                