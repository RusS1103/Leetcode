class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        result = []
        
        for i in range(len(queries)):
            count = 0
            for j in range(len(points)):
                if self.isInCircle(points[j], queries[i]):
                    count += 1
            result.append(count)
        
        return result
        
        
    def isInCircle(self, point: List[int], query: List[int]) -> bool:
        return (point[0] - query[0])**2 + (point[1] - query[1])**2 <= query[2]**2

