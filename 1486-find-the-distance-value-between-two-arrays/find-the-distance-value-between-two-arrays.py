class Solution:
    def findTheDistanceValue(self, arr1: List[int], arr2: List[int], d: int) -> int:
        # arr2.sort()
        # cnt = 0

        # for i in range(len(arr1)):
        #     low = 0
        #     high = len(arr2) - 1
        #     flag = False

        #     while low <= high:
        #         mid = low + (high - low) // 2

        #         if abs(arr1[i] - arr2[mid]) <= d:
        #             flag = True
        #             break
        #         elif abs(arr1[i] - arr2[mid]) < d:
        #             low = mid + 1
        #         else:
        #             high = mid - 1

        #     if flag == False:
        #         cnt += 1
        # return cnt

        cnt = 0
        for i in range(len(arr1)):
            flag = False
            for j in range(len(arr2)):
                if abs(arr1[i] - arr2[j]) <= d:
                    flag = True
                    break
            if flag == False:
                cnt += 1
        return cnt
