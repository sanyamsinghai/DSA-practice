class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        words = sentence.split()
        for i in range(len(words)):
            temp = words[i]
            j = 0
            while j < len(temp) and j < len(searchWord):
                if temp[j] != searchWord[j]:
                    break
                j += 1
            if j == len(searchWord):
                return i + 1
        return -1