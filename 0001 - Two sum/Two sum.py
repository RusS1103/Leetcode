class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        temp_dict = dict()
        for i in range(len(nums)):
            result = target - nums[i]
            if temp_dict.get(result) is not None:
                return {temp_dict.get(result), i}
            temp_dict[nums[i]] = i
