class Solution:
    def minSubsets(self, arr):
        #code here
        arr.sort()
        cnt=1
        for i in range(1,len(arr)):
            if arr[i]!=arr[i-1]+1:
                cnt+=1
        return cnt