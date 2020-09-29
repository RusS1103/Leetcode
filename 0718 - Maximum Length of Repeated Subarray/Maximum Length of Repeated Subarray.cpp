const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int result = 0;
        int dp[A.size() + 1][B.size() + 1];
        for (int i = 0; i <= A.size(); ++i) {
            for (int j = 0; j <= B.size(); ++j) {
                dp[i][j] = 0;
            }
        }
        for (int i = 1; i <= A.size(); ++i) {
            for (int j = 1; j <= B.size(); ++j) {
                if (A[i - 1] == B[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                result = max(result, dp[i][j]);
            }
        }
        return result;
    }
};
