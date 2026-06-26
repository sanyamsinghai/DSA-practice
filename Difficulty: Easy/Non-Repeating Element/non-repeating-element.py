class Solution:
    def firstNonRepeating(self, arr): 
        # code here
        d = {}
        
        for i in range(len(arr)):
            if arr[i] in d:
                d[arr[i]]+=1
            else:
                d[arr[i]]=1
        
        for i in d:
            if d[i]==1:
                return i
        return 0