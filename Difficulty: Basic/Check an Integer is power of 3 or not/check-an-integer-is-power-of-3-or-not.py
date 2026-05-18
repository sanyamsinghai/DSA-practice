#User function Template for python3
class Solution:
    def isPowerof3 (ob,n):
        # code here 
        if n == 0:
            return "No"

        while n % 3 == 0:
            n = n // 3

        if n == 1:
            return "Yes";
        return "No";