from math import fabs

class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        result = 2 ** 64
        n = len(nums)
        for k in range(n - 2):
            i, j = k + 1, n - 1
            while i < j:
                temp_sum = nums[k] + nums[i] + nums[j]
                if temp_sum == target:
                    return temp_sum
                elif temp_sum > target:
                    j = j - 1
                else:
                    i = i + 1
                if fabs(temp_sum - target) < fabs(result - target):
                    result = temp_sum
        return result

