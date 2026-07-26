class Solution:
    def maxTripletProduct (self, arr,  n): 
        #Complete the function
        temp = sorted(arr)
        ans1 = temp[0] * temp[1] * temp[-1]
        ans2 = temp[-1] * temp[-2] * temp[-3]
        return max(ans1, ans2)