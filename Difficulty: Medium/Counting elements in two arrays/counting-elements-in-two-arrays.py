class Solution:
    def countLessEq(self, a, b):
        # code here
        b.sort()
        
        ans = []
        
        for i in range(len(a)):
            low = 0
            high = len(b)-1
            cnt=0
            
            while low<=high:
                mid = low + (high-low)//2
                
                if b[mid]<=a[i]:
                    cnt=mid+1
                    low=mid+1
                else:
                    high=mid-1
            ans.append(cnt)
        return ans                