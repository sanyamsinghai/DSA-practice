class Solution:
    def removeDuplicates(self, arr):
        # code here 
        ans = []
        seen = set()
        for x in arr:
            if x not in seen:
                seen.add(x)
                ans.append(x)
        return ans