class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        if (k > n) {
            return {};
        }
        vector<int> combinations(n);
        vector<vector<int>> result;
        vector<int> path;
        for (int i = 0; i < n; ++i) {
            combinations[i] = i + 1;
        }
        backtracker(result, combinations, path, k, 0);
        return result;
    }
    
    void backtracker(vector<vector<int>>& result, vector<int>& combinations, vector<int>& path, int k, int index) {
        if (path.size() == k) {
            result.push_back(path);
            return;
        }
        for (int i = index; i < combinations.size(); ++i) {
            path.push_back(combinations[i]);
            backtracker(result, combinations, path, k, i + 1);
            path.pop_back();
        }
    }
};
