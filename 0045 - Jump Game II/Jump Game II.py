INF = 2**32

class Solution:
    def jump(self, nums: List[int]) -> int:
        dp = [INF] * len(nums)
        dp[0] = 0
        for i in range(0, len(nums)):
            for j in range(i + 1, nums[i] + i + 1):
                if j < len(nums):
                    dp[j] = min(dp[j], dp[i] + 1)
        return dp[-1]

