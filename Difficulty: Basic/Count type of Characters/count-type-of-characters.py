#User function Template for python3

class Solution:
    def count (self,s):
        # your code here
        ans = [0]*4
        for i in range(len(s)):
            if s[i].isupper():
                ans[0]+=1
            elif s[i].islower():
                ans[1]+=1
            elif s[i].isdigit():
                ans[2]+=1
            else:
                ans[3]+=1
        return ans
        