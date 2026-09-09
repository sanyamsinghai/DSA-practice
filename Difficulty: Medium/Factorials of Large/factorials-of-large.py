class Solution:
    def factorial(self, n):
        #code here
        import math 
        l = []
        res = math.factorial(n)
        res1 = str(res)

        for i in res1:
            l.append(i)

        return l        