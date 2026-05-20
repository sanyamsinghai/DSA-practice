class Solution:
    def isProduct(self, arr, target):
        # code here
        arr.sort()
        i=0
        j=len(arr)-1
        
        while i<j:
            if arr[i]*arr[j]==target:
                return True
            elif arr[i]*arr[j]<target:
                i+=1
            else:
                j-=1
        return False