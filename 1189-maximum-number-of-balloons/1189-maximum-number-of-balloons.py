class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        freq = {}
        for i in range(len(text)):
            if text[i] in freq:
                freq[text[i]] += 1
            else:
                freq[text[i]] = 1

        B = freq.get("b", 0)
        A = freq.get("a", 0)
        L = freq.get("l", 0)
        O = freq.get("o", 0)
        N = freq.get("n", 0)

        return min(B,A,L//2,O//2,N)