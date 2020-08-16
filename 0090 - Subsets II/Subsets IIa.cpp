const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> result;
        if (nums.size() == 0) {
            return {};
        }
        sort(nums.begin(), nums.end());
        dfs(result, subset, 0, nums);
        return result;
    }
    
    void dfs(vector<vector<int>>& result, vector<int>& subset, int startIndex, vector<int>& nums) {
        result.push_back(subset);
        
        for(int i = startIndex; i < nums.size(); ++i) {
            if (i != startIndex && nums[i] == nums[i - 1]) {
                continue;
            }
            
            subset.push_back(nums[i]);
            dfs(result, subset, i + 1, nums);
            subset.pop_back();
        }
    }
};
