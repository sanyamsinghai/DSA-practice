class Solution:
    def isSubsetSum (self, arr, sum):
        # code here 
        def check(ind,arr,s,sum):
            if s==sum:
                return True
            if ind==len(arr):
                return False
            if s>sum:
                return False
                
            if check(ind+1,arr,s+arr[ind],sum):
                return True
            if check(ind+1,arr,s,sum):
                return True
            return False
        
        if check(0,arr,0,sum):
            return True
        return False
        