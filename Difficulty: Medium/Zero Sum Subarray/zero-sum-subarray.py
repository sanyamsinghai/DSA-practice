class Solution:
    def subArrayExists(self, arr):
        # code here
        sum=0
        s=set()
        for i in range(len(arr)):
            sum+=arr[i]
            if sum==0 or sum in s:
                return True 
            s.add(sum)
        return False