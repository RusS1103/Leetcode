const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    set<vector<int>> result;
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, path, -1, target);
        vector<vector<int>> res;
        for (auto now : result) {
            res.push_back(now);
        }
        return res;
    }
    
    
    void backtrack(vector<int>& candidates, vector<int>& path, int index, int target) {
        if (target == 0) {
            result.insert(path);
            return;    
        }
        
        if (!path.empty() && *path.rbegin() > target) {
            return;
        }
        
        
        for (int i = index + 1; i < candidates.size(); ++i) {
            path.push_back(candidates[i]);
            backtrack(candidates, path, i, target - candidates[i]);
            path.pop_back();
        }
        return;
    }
};
