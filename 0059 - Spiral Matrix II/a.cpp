class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n));
        int k = 1;
        int rowBegin = 0;
        int rowEnd = matrix.size() - 1;
        int colBegin = 0;
        int colEnd = matrix[0].size() - 1;
        while (k <= n * n) {
            for (int i = colBegin; i <= colEnd; ++i) {
                matrix[rowBegin][i] = k;
                ++k;
            }
            
            ++rowBegin;
            
            for (int i = rowBegin; i <= rowEnd; ++i) {
                matrix[i][colEnd] = k;
                ++k;
            }
            
            --colEnd;
            
            for (int i = colEnd; i >= colBegin; --i) {
                matrix[rowEnd][i] = k;
                ++k;
            }
            
            --rowEnd;
            
            
            for (int i = rowEnd; i >= rowBegin; --i) {
                matrix[i][colBegin] = k;
                ++k;
            }
            
            ++colBegin;
        }
        return matrix;
    }
};
