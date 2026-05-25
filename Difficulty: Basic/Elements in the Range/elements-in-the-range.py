class Solution:
    def checkElements(self, start, end, arr):
        # code here
        cnt=0
        for i in range(len(arr)):
            if arr[i]>=start and arr[i]<=end:
                cnt+=1
        
        len_range = end-start+1
        if cnt==len_range:
            return True
        return False
        
