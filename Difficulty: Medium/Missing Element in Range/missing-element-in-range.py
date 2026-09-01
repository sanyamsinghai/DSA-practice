class Solution:
    def missingRange(self, arr, low, high):
        #code here
        # ans = []
        # for i in range(low,high+1):
        #     if i not in arr:
        #         ans.append(i)
        
        # return ans
        
        ans = []
        d = {}
        
        for i in range(len(arr)):
            d[arr[i]]=d.get(arr[i],0)+1
        
        for i in range(low,high+1):
            if i not in d:
                ans.append(i)
        
        return ans