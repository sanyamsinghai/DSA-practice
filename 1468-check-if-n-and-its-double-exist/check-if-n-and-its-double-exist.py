class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        d = {}

        for i in range(len(arr)):
            if 2 * arr[i] in d or (arr[i] % 2 == 0 and arr[i] // 2 in d):
                return True
            else:
                d[arr[i]] = i
        return False
