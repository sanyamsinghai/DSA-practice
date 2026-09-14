class Solution:
    def fibSum(self, n):
        #code here
        prev1=1
        prev2=0
        fib_sum=1
        for i in range(2,n+1):
            curr=prev1+prev2
            prev2=prev1
            prev1=curr
            fib_sum=fib_sum+(prev1)

        return fib_sum%1000000007