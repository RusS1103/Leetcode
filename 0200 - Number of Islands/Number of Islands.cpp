class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.size() == 0) {
            return {};
        }
        
        int count = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    count += 1;
                }
            }
        }
        return count;
    }
    
    void dfs(vector<vector<char>>& grid, int i, int j) {
        if (i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] != '1') {
            return;
        }
        
        grid[i][j] = '#';
        dfs(grid, i, j + 1);
        dfs(grid, i + 1, j);
        dfs(grid, i, j - 1);
        dfs(grid, i - 1, j);
    }
};
