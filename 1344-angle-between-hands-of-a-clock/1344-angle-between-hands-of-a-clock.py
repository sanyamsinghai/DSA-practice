class Solution:
    def angleClock(self, hour: int, minutes: int) -> float:
        
        hour_hand = (30 * hour) + (0.5 * minutes)
        minute_hand = 6 * minutes
        angle = abs(hour_hand - minute_hand)

        if angle > 180:
            return 360 - angle
        return angle
