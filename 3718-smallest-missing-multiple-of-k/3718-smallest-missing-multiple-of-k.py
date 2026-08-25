class Solution:
    def missingMultiple(self, nums: List[int], k: int) -> int:
        track = [0]*(100*k+1)
        for i in range(len(nums)):
            if nums[i]%k==0:
                track[nums[i]]=1
        
        for i in range(k,100*k+1,k):
            if track[i]==0:
                return i
        
        return i+k