class Solution:
    def productExceptSelf(self, arr):
        # code here
        pref_prod = [1]*len(arr)
        suff_prod = [1]*len(arr)
        
        ans = [0]*len(arr)
        
        for i in range(1,len(arr)):
            pref_prod[i]=pref_prod[i-1]*arr[i-1]
        
        for i in range(len(arr) - 2, -1, -1):
            suff_prod[i]=suff_prod[i+1]*arr[i+1]
            
        for i in range(len(arr)):
            ans[i]=pref_prod[i]*suff_prod[i]
        return ans