class Solution {
public:
    int integerBreak(int n) {
        if (n == 2 || n == 3) {
            return n - 1;
        }
        vector<int> dp(n + 1, 0);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= n; ++i) {
            int q = 0;
            for (int j = 1; j <= i; ++j) {
                q = max(q, j * dp[i - j]);
            }
            dp[i] = q;
        }
        return dp[n];
    }
};
