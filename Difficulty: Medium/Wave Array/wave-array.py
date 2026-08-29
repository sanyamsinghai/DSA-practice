class Solution:
    def sortInWave(self, arr):
        # code here
        i=0
        j=1
        while i<len(arr) and j<len(arr):
            arr[i],arr[j]=arr[j],arr[i]
            i+=2
            j+=2
        
