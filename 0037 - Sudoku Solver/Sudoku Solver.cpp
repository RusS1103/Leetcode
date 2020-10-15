class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board, 0, 0);
    }
    
    bool isValid(vector<vector<char>>& board, int i, int j, char ch) {
        for (int k = 0; k < 9; ++k) {
            if (board[i][k] == ch) {
                return false;
            }
        }
        for (int k = 0; k < 9; ++k) {
            if (board[k][j] == ch) {
                return false;
            }
        }
        for (int k = i / 3 * 3; k < 3 + i / 3 * 3; ++k) {
            for (int l = j / 3 * 3; l < 3 + j / 3 * 3; ++l) {
                if (board[k][l] == ch) {
                    return false;
                }
            }
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board, int i, int j) {
        if (j == 9) {
            j = 0;
            ++i;
        }
        if (i == 9) {
            return true;
        }
        if (board[i][j] != '.') {
            return solve(board, i, j + 1);
        }
        for (char c = '1'; c <= '9'; ++c) {
            if (isValid(board, i, j, c)) {
                board[i][j] = c;
                if (solve(board, i, j + 1)) {
                    return true;
                }
                board[i][j] = '.';
            }
        }
        return false;
    }
};
