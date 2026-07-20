class Solution:
    def prime(self, num):
        if num < 2:
            return False
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return False
        return True

    def checkPrimeFrequency(self, nums: List[int]) -> bool:
        d = {}
        for i in range(len(nums)):
            if nums[i] in d:
                d[nums[i]] += 1
            else:
                d[nums[i]] = 1

        for i in d:
            if self.prime(d[i]):
                return True

        return False
