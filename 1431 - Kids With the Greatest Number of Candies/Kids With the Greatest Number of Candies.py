class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_el = max(candies)
        result = []
        
        for el in candies:
            if el + extraCandies >= max_el:
                result.append(True)
            else:
                result.append(False)
            
        return result

