class Solution:
    def nextGreaterElements(self, arr: List[int]) -> List[int]:
        st = []
        ans = [-1] * len(arr)

        for i in range(len(arr) - 1, -1, -1):
            while st and st[-1] <= arr[i]:
                st.pop()

            if st:
                ans[i] = st[-1]

            st.append(arr[i])
            
        for i in range(len(arr) - 1, -1, -1):
            while st and st[-1] <= arr[i]:
                st.pop()

            if st:
                ans[i] = st[-1]

            st.append(arr[i])

        return ans
