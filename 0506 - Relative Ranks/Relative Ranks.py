class Solution:
    def findRelativeRanks(self, score: List[int]) -> List[str]:
        nums = sorted(score, reverse=True)
        print(*nums)
        result = {}
        
        for i in range(len(nums)):
            if i == 0:
                result[nums[i]] = "Gold Medal"
            elif i == 1:
                result[nums[i]] = "Silver Medal"
            elif i == 2:
                result[nums[i]] = "Bronze Medal"
            else:
                result[nums[i]] = str(i + 1)
        
        return [result[x] for x in score]

