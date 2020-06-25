const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int MODIFIED = -INT_MAX;
        int n = matrix.size(), m = matrix[0].size();
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] == 0) {
                    for (int k = 0; k < n; ++k) {
                        if (matrix[k][j] != 0) {
                            matrix[k][j] = MODIFIED;
                        }
                    }
                    for (int k = 0; k < m; ++k) {
                        if (matrix[i][k] != 0) {
                            matrix[i][k] = MODIFIED;
                        }
                    }
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] == MODIFIED) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
