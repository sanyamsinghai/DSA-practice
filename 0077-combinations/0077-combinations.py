class Solution:
    def combine(self, n: int, k: int) -> List[List[int]]:
        ans = []

        def fn(s, temp):
            if len(temp) == k:
                ans.append(temp[:])
                return

            for i in range(s, n + 1):
                temp.append(i)
                fn(i + 1, temp)
                temp.pop()

        fn(1, [])
        return ans
