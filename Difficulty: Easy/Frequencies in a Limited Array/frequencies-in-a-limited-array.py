class Solution:
    def frequencyCount(self, arr):
        #  code here
        freq = [0]*len(arr)
        
        for i in range(len(arr)):
            if 1 <= arr[i] <= len(arr):
                freq[arr[i]-1]+=1
        return freq
            
