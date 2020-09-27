const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int result = 0;
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (grid[i][j] == 1) {
                    result += 4;
                    int left = j - 1, up = i - 1;
                    if (left >= 0 && grid[i][left] == 1) {
                        result -= 2;
                    }
                    if (up >= 0 && grid[up][j] == 1) {
                        result -= 2;
                    }
                }
            }
        }
        return result;
    }
};
