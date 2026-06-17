class Solution:
    def getFirstSetBit(self,n):
        # code here
        cnt = 0
        
        while n:
            if n&1:
                cnt+=1
                return cnt
            n=n>>1
            cnt+=1
        return 0
        