const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.reserve(1 << nums.size());
        ans.push_back(vector<int>());
        for (int v : nums) {
            size_t size = ans.size();
            for (int i = 0; i < (int)size; ++i) {
                ans.push_back(ans[i]);
                ans.back().push_back(v);
            }
        }
        return ans;
    }
};
