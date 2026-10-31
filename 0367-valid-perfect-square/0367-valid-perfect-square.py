class Solution:
    def isPerfectSquare(self, x: int) -> bool:
        low = 1
        high = x

        if x == 1:
            return True

        while low <= high:
            mid = low + (high - low) // 2

            if mid * mid == x:
                return True
            elif mid * mid < x:
                low = mid + 1
            else:
                high = mid - 1

        return False