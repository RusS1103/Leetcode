class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        result = []
        
        for el in nums:
            if nums[abs(el) - 1] < 0:
                result.append(abs(el))
            else:
                nums[abs(el) - 1] *= -1
                
        return result
