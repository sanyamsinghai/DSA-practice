class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        #first using binary search
        left = 0
        right = len(numbers) - 1

        while left < right:
            mid = left + (right - left) // 2
            if numbers[left] + numbers[right] == target:
                return [left + 1, right + 1]
            elif numbers[left] + numbers[right] > target:
                right -= 1
            else:
                left += 1
        return [-1, -1]


        #using dictionary
        # ans = {}
        # for i in range(len(numbers)):
        #     el = target - numbers[i]
        #     if el in ans:
        #         return [ans[el] + 1, i + 1]
        #     ans[numbers[i]] = i
        # return [-1, -1]
