struct dir {
    int x, y;
};

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> matrix(n, vector<int>(m));
        vector<dir> dirs = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int liveCount = 0;
                for (const auto& now : dirs) {
                    int x = now.x + i;
                    int y = now.y + j;
                    if (x >= 0 && x < n && y >= 0 && y < m && board[x][y] == 1) {
                        ++liveCount;
                    }
                }
                if (board[i][j] == 0 && liveCount == 3) {
                    matrix[i][j] = 1;
                } else if (board[i][j] == 1) {
                    if (liveCount == 2 || liveCount == 3) {
                        matrix[i][j] = 1;
                    }
                }
            }
        }
        board = matrix;
    }
};
