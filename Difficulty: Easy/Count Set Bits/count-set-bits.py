class Solution:
    def setBits(self, n):
        # code here
        cnt=0
        while n:
            if n & 1==1:
                cnt+=1
            n=n>>1
        return cnt