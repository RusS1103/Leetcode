class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        for el in nums:
            if i < 2 or el > nums[i - 2]:
                nums[i] = el
                i += 1
        return i

