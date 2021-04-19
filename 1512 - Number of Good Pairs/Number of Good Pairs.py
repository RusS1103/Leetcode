class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        d = {}
        for el in nums:
            d[el] = d.get(el, 0) + 1
        result = 0
        for value in d.values():
            result += value * (value - 1) // 2
        return result

