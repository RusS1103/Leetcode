const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty()) return false;
        int r = matrix.size(), c = matrix[0].size();
        int i = r - 1, j = 0;
        while (i >= 0 && j < c) {
            if (matrix[i][j] == target) return true;
            else if (matrix[i][j] < target) ++j;
            else --i;
        }
        return false;
    }
};
