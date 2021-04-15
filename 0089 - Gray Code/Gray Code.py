class Solution:
    def grayCode(self, n: int) -> List[int]:
        result = []
        result.append(0)
        for i in range(n):
            size = len(result)
            for j in range(size - 1, -1, -1):
                result.append(result[j] | 1 << i)
        return result

