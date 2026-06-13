class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        ans = ""
        for i in words:
            el = i
            j = 0
            temp = 0
            while j < len(el):
                ind = ord(el[j]) - ord("a")
                temp += weights[ind]
                j += 1
            mod = temp % 26
            char = chr(ord("z") - mod)
            ans += char
        return ans
