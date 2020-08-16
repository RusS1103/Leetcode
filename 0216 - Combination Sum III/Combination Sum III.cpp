const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(path, result, k, n, 1);
        return result;
    }
    
    void dfs(vector<int>& path, vector<vector<int>>& result, int k, int n, int startIndex) {
        if (n == 0 && k == path.size()) {
            result.push_back(path);
        }
        
        if (n < 0 && k == path.size()) {
            return;
        }
        
        for (int i = startIndex; i <= 9; ++i) {
            path.push_back(i);
            dfs(path, result, k, n - i, i + 1);
            path.pop_back();
        }
    }
};
