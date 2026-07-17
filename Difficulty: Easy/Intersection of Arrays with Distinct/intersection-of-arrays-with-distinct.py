class Solution:
    def intersectSize(self,a, b):
        # code here
        d = {}
       
        for i in range(len(a)):
            if a[i] in d:
                d[a[i]]+=1
            else:
                d[a[i]]=1
        
        cnt=0
        for i in range(len(b)):
            if b[i] in d:
                cnt+=1
        return cnt
