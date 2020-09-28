class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> dp(n, 0);
        dp[0] = 1;
        int i = 0, j = 0, k = 0;
        for (int x = 1; x < n; ++x) {
            dp[x] = min(dp[i] * 2, min(dp[j] * 3, dp[k] * 5));
            if (dp[x] == dp[i] * 2) {
                ++i;
            }
            if (dp[x] == dp[j] * 3) {
                ++j;
            }
            if (dp[x] == dp[k] * 5) {
                ++k;
            }
        }
        return dp[n - 1];
    }
};
