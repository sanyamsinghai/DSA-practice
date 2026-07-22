class Solution:
    def nextLargerElement(self, arr):
        # code here
        st = []
		ans = [-1]*len(arr)
		
	    for i in range(len(arr)-1,-1,-1):
	        while st and st[-1]<=arr[i]:
	            st.pop()
	        if st:
	            ans[i]=st[-1]
	        st.append(arr[i])
	    return ans