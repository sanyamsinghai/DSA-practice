class Solution:
    def permuteDist(self, arr):
        # code here
        def check(ans, ds, map):
            if len(ds) == len(arr):
                ans.append(list(ds))
                return
            for i in range(len(arr)):
                if i not in map:
                    ds.append(arr[i])
                    map[i] = 1
                    check(ans, ds, map)
                    ds.pop()
                    del map[i]

        ans = []
        check(ans, [], {})
        return ans
        
        