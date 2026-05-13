#User function Template for python3

class Solution:
    def sumOfNaturals(self, n):
        # code here
        sum=0
        for i in range(1,n+1):
            sum+=i
        return sum