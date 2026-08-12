class Solution:
    def twoRepeated(self, arr):
        # code here
        res=[]
        d={}
        for i in arr:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
                if d[i]==2:
                    res.append(i)
        return res