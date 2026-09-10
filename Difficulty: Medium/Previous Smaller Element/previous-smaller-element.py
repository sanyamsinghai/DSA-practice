class Solution:
	def prevSmaller(self, arr):
		# code here
		stack = []
		ans = [-1]*len(arr)
		for i in range(len(arr)):
		    while stack and stack[-1]>=arr[i]:
		        stack.pop()
		    if stack:
		        ans[i]=stack[-1]
		    stack.append(arr[i])
		return ans