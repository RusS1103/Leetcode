const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        if (candidates.size() == 0) {
            return {};
        }
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> path;
        helpFunc(candidates, 0, target, result, path);
        return result;
    }
    
    void helpFunc(const vector<int>& candidates, int index, int target, vector<vector<int>>& result, vector<int>& path) {
        if (target == 0) {
            result.push_back(path);
            return;
        }
        
        if (!path.empty() && target < *(path.rbegin())) {
            return;
        }
        
        for (int i = index; i < candidates.size(); ++i) {
            path.push_back(candidates[i]);
            helpFunc(candidates, i, target - candidates[i], result, path);
            path.pop_back();
        }
    }
};
