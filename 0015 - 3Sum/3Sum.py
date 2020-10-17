class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        if len(nums) < 3:
            return list()
        
        n = len(nums)
        nums.sort()
        result = list()
        for k in range(n - 2):
            if k == 0 or nums[k] != nums[k - 1]:
                i, j = k + 1, n - 1
                while i < j:
                    sum = nums[k] + nums[i] + nums[j]
                    if sum == 0:
                        result.append([nums[k], nums[i], nums[j]])
                        while i < j and nums[i] == nums[i + 1]:
                            i = i + 1
                        while i < j  and nums[j] == nums[j - 1]:
                            j = j - 1
                        i = i + 1
                        j = j - 1
                    elif sum > 0:
                        j = j - 1
                    else:
                        i = i + 1
        return result

