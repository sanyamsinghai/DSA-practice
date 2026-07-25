class Solution:
    def maxSubarraySum(self, arr):
        # Code here
        maxi = float('-inf')
        
        s = 0
        for i in arr:
            s+=i
            maxi = max(maxi,s)
            
            if s<0:
                s = 0
        
        return maxi