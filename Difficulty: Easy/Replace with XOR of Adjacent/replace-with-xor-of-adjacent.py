class Solution:
    def replaceElements(self, arr):
        # code here
        temp = [0]*len(arr)
        
        temp[0] = arr[0] ^ arr[1]
        temp[-1] = arr[-1] ^ arr[-2]
        
        for i in range(1,len(arr)-1):
            temp[i]=arr[i-1] ^ arr[i+1]
        
        for i in range(len(temp)):
            arr[i]=temp[i]
            
        