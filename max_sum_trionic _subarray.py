from typing import List

class Solution:
    def maxSumTrionic(self, nums: List[int]) -> int:
        n = len(nums)

        incL = [None] * n
        dec = [None] * n
        incR = [None] * n

        # Increasing from left (length >= 2)
        curr_sum = nums[0]
        length = 1
        for i in range(1, n):
            if nums[i] > nums[i - 1]:
                curr_sum += nums[i]
                length += 1
                if length >= 2:
                    incL[i] = curr_sum
            else:
                curr_sum = nums[i]
                length = 1

        # Decreasing from left (length >= 2)
        curr_sum = nums[0]
        length = 1
        for i in range(1, n):
            if nums[i] < nums[i - 1]:
                curr_sum += nums[i]
                length += 1
                if length >= 2:
                    dec[i] = curr_sum
            else:
                curr_sum = nums[i]
                length = 1

        # Increasing from right (length >= 2)
        curr_sum = nums[-1]
        length = 1
        for i in range(n - 2, -1, -1):
            if nums[i] < nums[i + 1]:
                curr_sum += nums[i]
                length += 1
                if length >= 2:
                    incR[i] = curr_sum
            else:
                curr_sum = nums[i]
                length = 1

        # Combine
        ans = float('-inf')
        for i in range(1, n - 1):
            if incL[i - 1] is not None and dec[i] is not None and incR[i + 1] is not None:
                total = incL[i - 1] + dec[i] + incR[i + 1]
                ans = max(ans, total)

        return ans