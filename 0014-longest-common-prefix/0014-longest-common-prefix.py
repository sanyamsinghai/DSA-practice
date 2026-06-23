class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = strs[0]
        for i in range(1,len(strs)):
            new = ""
            temp = strs[i]
            l1 = 0
            l2 = 0
            while l1 < len(prefix) and l2 < len(temp):
                if prefix[l1] == temp[l2]:
                    new += prefix[l1]
                    l1 += 1
                    l2 += 1
                else:
                    break
            prefix = new

        return prefix
