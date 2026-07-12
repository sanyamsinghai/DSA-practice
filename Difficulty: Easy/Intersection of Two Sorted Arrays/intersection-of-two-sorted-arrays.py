class Solution:
    def intersection(self, arr1, arr2):
        #code here
        ans = []

        i = 0
        j = 0

        while i < len(arr1) and j < len(arr2):
            if arr1[i] == arr2[j]:
                if len(ans) == 0 or ans[-1] != arr1[i]:
                    ans.append(arr1[i])
                i += 1
                j += 1

            elif arr1[i] < arr2[j]:
                i += 1
            else:
                j += 1

        return ans