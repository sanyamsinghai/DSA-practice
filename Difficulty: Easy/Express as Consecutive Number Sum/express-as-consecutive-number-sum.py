class Solution:
    def isSumOfConsecutive(self, n: int) -> bool:
        # code here
        if n > 0 and (n & (n - 1)) == 0:
            return False
        else:
            return True
            
            
        