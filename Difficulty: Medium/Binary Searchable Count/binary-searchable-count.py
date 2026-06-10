class Solution:
    def search(self,el,l,r,arr):
        while l<=r:
            mid = l + (r-l)//2
            if arr[mid] == el:
                return True
            elif arr[mid] < el:
                l=mid+1
            else:
                r=mid-1
        return False
    
    def binarySearchable(self, arr):
        # code here
        cnt=0
        for i in range(len(arr)):
            if self.search(arr[i],0,len(arr)-1,arr):
                cnt+=1
        return cnt