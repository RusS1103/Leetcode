const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}(); 

class Solution {
public:
    int minPathSum(const vector<vector<int>>& grid) {
        int H = grid.size();
        int W = grid[0].size();
        if (H == 0) {
            return {};
        }
        int matrix[H][W];
        
        matrix[0][0] = grid[0][0];
        
        for (int i = 1; i < W; ++i) {
            matrix[0][i] = grid[0][i] + matrix[0][i - 1];
        }
        
        for (int i = 1; i < H; ++i) {
            matrix[i][0] = grid[i][0] + matrix[i - 1][0];
        }
        
        for (int i = 1; i < H; ++i) {
            for (int j = 1; j < W; ++j) {
                matrix[i][j] = min(matrix[i - 1][j], matrix[i][j - 1]) + grid[i][j];
            }
        }
        
        return matrix[H - 1][W - 1];
    }
};
