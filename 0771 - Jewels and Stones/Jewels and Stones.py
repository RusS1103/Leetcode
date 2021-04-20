class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        result = 0
        d = dict()
        for jewel in jewels:
            d[jewel] = d.get(jewel, 0) + 1
        for stone in stones:
            if stone in d:
                result += 1
        return result
