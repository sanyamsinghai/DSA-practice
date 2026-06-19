class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        pref_sum = 0
        maxi = 0
        for i in range(len(gain)):
            pref_sum += gain[i]
            maxi = max(maxi, pref_sum)
        return maxi
