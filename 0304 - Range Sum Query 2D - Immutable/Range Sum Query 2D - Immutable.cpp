const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) {
            return;
        }
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size() + 1, 0));
        int H = matrix.size();
        int W = matrix[0].size();
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                dp[i][j + 1] = dp[i][j] + matrix[i][j];
            }
        }
        data = dp;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for (int i = row1; i <= row2; ++i) {
            sum += data[i][col2 + 1] - data[i][col1];
        }
        return sum;
    }
    
    vector<vector<int>> data;
};
