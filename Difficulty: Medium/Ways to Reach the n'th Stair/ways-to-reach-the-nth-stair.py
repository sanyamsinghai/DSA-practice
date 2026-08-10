class Solution:
    def countWays(self, n: int) -> int:
        # code here
        # if n <= 2:
        #     return n

        # return self.countWays(n - 1) + self.countWays(n - 2)
        
        if n<=2:
            return n
        
        a=1
        b=2
        
        for i in range(3,n+1):
            c=a+b
            a=b
            b=c
        
        return b