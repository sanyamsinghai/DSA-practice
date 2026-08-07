class Solution:
    def removeUtil (self, s):
		#code here
		ans = ""
		n=len(s)
		i=0
		
		while i<n:
		    if i<n-1 and s[i]==s[i+1]:
		        while i<n-1 and s[i]==s[i+1]:
		            i+=1
		        i+=1
            else:
                ans+=s[i]
                i+=1
        
        if ans==s:
            return ans
        else:
            return self.removeUtil(ans)