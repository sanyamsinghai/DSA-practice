class Solution:
    def sumOfDigits(self, n):
        # code here
        sum=0
        while n:
            digit = n%10
            sum+=digit
            n=n//10
        return sum
        