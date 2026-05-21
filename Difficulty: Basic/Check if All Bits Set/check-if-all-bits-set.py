class Solution:
    def isBitSet(self, n):
        # code here
        
        if n==0:
            return False
        
        while n:
            if n & 1==0:
                return False
            n=n>>1
        return True