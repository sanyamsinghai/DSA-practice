class Solution:
    def thirdLargest(self,arr):
        # code here
        if len(arr)<3:
            return -1
        arr.sort()
        return arr[-3]