class Solution:
	def pushZerosToEnd(self, arr):
    	# code here
    	i=0
    	for j in range(len(arr)):
    	    if arr[j]==0:
    	        continue
    	    else:
    	        arr[i],arr[j]=arr[j],arr[i]
    	        i+=1