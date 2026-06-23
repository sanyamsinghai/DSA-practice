class Solution:
    def maxPeopleDefeated(self, p):
        # code here
        cnt = 0
        remaining = p
        for i in range(1,p+1):
            temp = i*i
            if temp <= remaining:
                remaining -= temp
                cnt += 1
            else:
                break
        return cnt
            