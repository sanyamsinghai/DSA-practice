class Solution:
    def maxArea(self, height):
        # code here
        i=0
        j=len(height)-1
        
        max_area=0
        while i<j:
            mini = min(height[i],height[j])
            area = mini * (j-i-1)
            max_area=max(max_area,area)
            if height[i]<height[j]:
                i+=1
            else:
                j-=1
        return max_area