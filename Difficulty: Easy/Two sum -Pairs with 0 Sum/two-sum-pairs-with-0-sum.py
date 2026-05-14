#User function Template for python3

class Solution:
    def getPairs(self, arr):
        # code here
        # ans=[]
        # dic = {}
        # for i in range(len(arr)):
        #     el=0-arr[i]
        #     if el in dic:
        #         pair = sorted([el,arr[i]])
        #         if pair not in ans:
        #             ans.append(pair)
        #     dic[arr[i]]=i
        
        # ans.sort()
        # return ans
        arr.sort()

        ans = []

        left = 0
        right = len(arr) - 1

        while left < right:

            s = arr[left] + arr[right]

            # pair found
            if s == 0:

                ans.append([arr[left], arr[right]])

                # skip duplicates
                while left < right and arr[left] == arr[left + 1]:
                    left += 1

                while left < right and arr[right] == arr[right - 1]:
                    right -= 1

                left += 1
                right -= 1

            # sum too small
            elif s < 0:
                left += 1

            # sum too large
            else:
                right -= 1

        return ans