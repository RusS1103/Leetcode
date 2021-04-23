class Solution:
    def minOperations(self, nums: List[int]) -> int:
        result = 0
        for i in range(len(nums) - 1):
            if nums[i] >= nums[i + 1]:
                result += abs(nums[i] - nums[i + 1]) + 1
                nums[i + 1] = nums[i] + 1
        return result

