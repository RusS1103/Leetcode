class NumMatrix:
    
    def __init__(self, matrix: List[List[int]]):
        self.matrix = matrix
        self.prefix_sums = []
        for i in range(len(matrix)):
            self.prefix_sums.append([0])
        for i in range(len(matrix)):
            temp_sum = 0
            for j in range(len(matrix[0])):
                temp_sum += matrix[i][j]
                self.prefix_sums[i].append(temp_sum)
                
        for i in range(len(self.prefix_sums)):
            for j in range(len(self.prefix_sums[0])):
                print(self.prefix_sums[i][j], end=' ')
            print()
        

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        result = 0
        for i in range(row1, row2 + 1):
            result += self.prefix_sums[i][col2 + 1] - self.prefix_sums[i][col1]
        return result


# Your NumMatrix object will be instantiated and called as such:
# obj = NumMatrix(matrix)
# param_1 = obj.sumRegion(row1,col1,row2,col2)
