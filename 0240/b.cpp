const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); ++i) {
            if (binary_search(matrix[i].begin(), matrix[i].end(), target)) return true;
        }
        return false;
    }
};
