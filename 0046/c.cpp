const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> permute(const vector<int>& nums) {
        vector<vector<int>> result;
        int fact = 1;
        for (size_t i = 2; i <= nums.size(); ++i) {
            fact *= i;
        }
        result.reserve(fact);
        vector<int> temp = nums;
        for (size_t i = 0; i < fact; ++i) {
            result.push_back(temp);
            next_permutation(temp.begin(), temp.end());
        }
        return result;
    }
};
