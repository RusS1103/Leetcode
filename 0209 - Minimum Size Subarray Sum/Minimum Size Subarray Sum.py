class Solution:
    def minSubArrayLen(self, s: int, nums: List[int]) -> int:
        n = len(nums)
        ans = 2**32
        sum = 0
        left = 0
        for i in range(n):
            sum += nums[i]
            while sum >= s:
                ans = min(ans, i - left + 1)
                sum -= nums[left]
                left = left + 1
        if ans == 2**32:
            return 0
        return ans 

