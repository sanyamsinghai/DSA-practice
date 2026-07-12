class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        if len(arr) == 0:
            return []
        temp = sorted(arr)
        d = {}
        cnt = 1
        d[temp[0]] = 1
        for i in range(1, len(temp)):
            if temp[i] != temp[i - 1]:
                cnt += 1
                d[temp[i]] = cnt
            else:
                d[temp[i]] = cnt
        for i in range(len(arr)):
            arr[i] = d[arr[i]]

        return arr
