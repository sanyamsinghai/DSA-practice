class Solution:
    def countPairs(self, arr, target):
        #code here
        myMap = {}
        count = 0

        for num in arr:
            reqd = target - num

            if reqd in myMap:
                count += myMap[reqd]

            if num in myMap:
                myMap[num] += 1
            else:
                myMap[num] = 1

        return count