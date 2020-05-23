const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> permute(const vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> start = nums;
        while (true) {
            result.push_back(start);
            next_permutation(start.begin(), start.end());
            if (start == nums) {
                return result;
            }
        }
    }
};
