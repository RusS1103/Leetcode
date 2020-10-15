class Solution:
    def solveSudoku(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        Solution.solve(board, 0, 0)
        
    def solve(board, i, j):
        if j == 9:
            i = i + 1
            j = 0
        
        if i == 9:
            return True
        
        if board[i][j] != '.':
            return Solution.solve(board, i, j + 1)
        
        for c in ['1', '2', '3', '4', '5', '6', '7', '8', '9']:
            if Solution.isValid(board, i, j, c):
                board[i][j] = c
                if Solution.solve(board, i, j + 1):
                    return True
                board[i][j] = '.'
        return False
        
    def isValid(board, i, j, ch):
        for k in range(9):
            if board[k][j] == ch:
                return False
            
        for k in range(9):
            if board[i][k] == ch:
                return False
            
        for k in range(i // 3 * 3, 3 + i // 3 * 3):
            for l in range(j // 3 * 3, 3 + j // 3 * 3):
                if board[k][l] == ch:
                    return False
                
        return True

