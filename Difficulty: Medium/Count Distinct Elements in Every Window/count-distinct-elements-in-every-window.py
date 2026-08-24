class Solution:
    def countDistinct(self, arr, k):
        # code here
        # ans = []

        # for i in range(len(arr) - k + 1):
        #     s = set()

        #     for j in range(i, i + k):
        #         s.add(arr[j])

        #     ans.append(len(s))

        # return ans
        
        ans = []
        freq = {}

        # First window
        for i in range(k):
            freq[arr[i]] = freq.get(arr[i], 0) + 1

        ans.append(len(freq))

        for i in range(k, len(arr)):
            out = arr[i - k]
            freq[out] -= 1

            if freq[out] == 0:
                del freq[out]

            incoming = arr[i]
            freq[incoming] = freq.get(incoming, 0) + 1

            ans.append(len(freq))

        return ans