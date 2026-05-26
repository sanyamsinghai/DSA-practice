class Solution:
    def numberOfSpecialChars(self, word: str) -> int:
        cnt = 0
        upper = []
        lower = []

        for i in range(len(word)):
            if word[i].isupper():
                upper.append(ord(word[i]) - ord("A"))   
            else:
                lower.append(ord(word[i]) - ord("a"))

        s1 = set(upper)
        s2 = set(lower)

        for i in s1:
            if i in lower:
                cnt+=1
        return cnt