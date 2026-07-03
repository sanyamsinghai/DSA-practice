class Solution:
    def valEqualToPos(self, arr):
        # code here
        ans = []
        
        for i in range(len(arr)):
            if arr[i]==i+1:
                ans.append(arr[i])
        return ans