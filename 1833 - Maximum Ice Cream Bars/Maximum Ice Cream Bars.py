class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs = sorted(costs)
        for i in range(len(costs)):
            if coins >= costs[i]:
                coins -= costs[i]
            else:
                return i
        return len(costs)
