const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // vector<vector<int>> ans;
        // vector<vector<int>> temp_vec;
        // temp_vec.push_back({});
        // for (auto num : nums) {
        //     for (int i = 0; i < temp_vec.size(); ++i) {
        //         temp_vec.push_back(temp_vec[i]);
        //         temp_vec.back().push_back(num);
        //     }
        // }
        // return temp_vec;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        ans.reserve(1 << nums.size());
        ans.push_back(vector<int>());
        for (int v : nums) {
            size_t size = ans.size();
            for (int i = 0; i < size; ++i) {
                ans.push_back(ans[i]);
                ans.back().push_back(v);
            }
        }
        set<vector<int>> temp_ans;
        for (auto now : ans) {
            temp_ans.insert(now);
        }
        vector<vector<int>> result;
        for (auto now : temp_ans) {
            result.push_back(now);
        }
        return result;
    }
};
