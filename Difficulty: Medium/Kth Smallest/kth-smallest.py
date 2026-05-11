class Solution:
    def kthSmallest(self, arr, k):
        # Code here
        arr.sort()
        for i in range(len(arr)):
            if i==k:
                return arr[i-1]
        return arr[len(arr)-1]
        
