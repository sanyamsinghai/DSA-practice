class Solution:
    def single(self, arr):
        # code here
        # low = 0
        # high = len(arr)-1
        
        # while low <= high:
        #     mid = low + (high - low) // 2
        #     if arr[mid]
        
        xor=0
        
        for i in range(len(arr)):
            xor ^= arr[i]
            
        return xor
        