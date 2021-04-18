class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        result = [0] * len(boxes)
        ops, count = 0, 0
        for i in range(len(boxes)):
            result[i] += ops
            count += 1 if boxes[i] == '1' else 0
            ops += count
        ops, count = 0, 0
        for i in range(len(boxes) - 1, -1, -1):
            result[i] += ops
            count += 1 if boxes[i] == '1' else 0
            ops += count
        return result
