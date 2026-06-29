class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        cnt = 0
        for i in range(len(patterns)):
            if patterns[i] in word:
                cnt += 1
        return cnt
