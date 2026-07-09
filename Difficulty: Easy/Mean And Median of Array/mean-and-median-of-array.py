import math
class Solution:
    def median(self, arr):
        #code here
        arr.sort()
        if len(arr)%2==0:
            med1 = (len(arr)//2) - 1
            med2 = len(arr)//2
            
            return (arr[med1]+arr[med2])//2
        else:
            med = len(arr)//2
            return arr[med]
    
    def mean(self, arr):
        #code here
        total = sum(arr)
        return total//len(arr)