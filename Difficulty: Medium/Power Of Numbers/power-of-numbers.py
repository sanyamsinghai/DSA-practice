class Solution:
    def reverseexponentiation(self, n):
        # code here
        temp = n
        rev = 0
        while temp:
            digit=temp%10
            rev=rev*10+digit
            temp=temp//10
        return pow(n,rev)
        