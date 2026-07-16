import math
class Solution:
    def lcmAndGcd(self, a : int, b : int) -> List[int]:
        # code here
        return [math.lcm(a,b),math.gcd(a,b)]
        