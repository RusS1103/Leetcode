vector<vector<int>> dirs = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int result = 0;
        vector<vector<int>> cache(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int len = dfs(matrix, i, j, cache);
                result = max(result, len);
            }
        }
        return result;
    }
    
    int dfs(vector<vector<int>>& matrix, int i, int j, vector<vector<int>>& cache) {
        if (cache[i][j] != 0) {
            return cache[i][j];
        }
        int result = 1;
        for (const auto& dir : dirs) {
            int x = i + dir[0], y = j + dir[1];
            if (x < 0 || y < 0 || x >= matrix.size() || y >= matrix[0].size() || matrix[x][y] <= matrix[i][j]) {
                continue;
            }
            int len = 1 + dfs(matrix, x, y, cache);
            result = max(result, len);
        }
        cache[i][j] = result;
        return result;
    }
};
