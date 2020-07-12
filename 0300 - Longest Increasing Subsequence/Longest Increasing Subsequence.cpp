const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int lengthOfLIS(const vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        vector<int> dp(nums.size(), 1);
        int n = nums.size();
        for (int j = 1; j < n; ++j) {
            for (int i = 0; i < j; ++i) {
                if (nums[j] > nums[i]) {
                    dp[j] = max(dp[i] + 1, dp[j]);
                }
            }
        }
        int max = 1;
        for (auto now : dp) {
            if (now > max) {
                max = now;
            }
        }
        return max;
    }
};
