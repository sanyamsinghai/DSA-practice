class Solution:
    def kthElement(self, a, b, k):
        # code here
        ans = []
        for i in a:
            ans.append(i)
        for i in b:
            ans.append(i)
            
        ans.sort()
        
        for i in range(len(ans)):
            if i==k-1:
                return ans[i]
                
        return -1
        