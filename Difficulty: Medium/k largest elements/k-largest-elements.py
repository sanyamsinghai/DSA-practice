class Solution:
	def kLargest(self, arr, k):
		# Your code here
		arr.sort()
		temp = []
		for i in range(len(arr)-1,(len(arr)-k-1),-1):
		    temp.append(arr[i])
		return temp