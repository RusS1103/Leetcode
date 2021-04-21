class Solution:
    
    def checkArithmeticSubarrays(self, nums: List[int], l: List[int], r: List[int]) -> List[bool]:
        return [self.isArith(nums[start: end + 1]) for start, end in zip(l, r)]
    
    
    def isArith(self, nums):
        mn, mx = min(nums), max(nums)
        s = set(nums)
        if len(s) != len(nums):
            return len(s) == 1
        if (mx - mn) % (len(nums) - 1) != 0:
            return False
        step = (mx - mn) // (len(nums) - 1)
        for el in range(mn, mx, step):
            if el not in s:
                return False
        return True
