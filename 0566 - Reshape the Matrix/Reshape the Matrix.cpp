const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> result(r, vector<int>(c));
        if (nums.size() == 0 || r * c != nums.size() * nums[0].size()) {
            return nums;
        }
        int rows = 0, cols = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums[0].size(); ++j) {
                result[rows][cols] = nums[i][j];
                cols++;
                if (cols == c) {
                    ++rows;
                    cols = 0;
                }
            }
        }
        return result;
    }
};
