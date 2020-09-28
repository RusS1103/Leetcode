const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int len = s.size();
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        vector<bool> dp(len + 1, false);
        dp[0] = true;
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j <= i; ++j) {
                string str = s.substr(j, i - j + 1);
                if (dict.find(str) != dict.end() && dp[j]) {
                    dp[i + 1] = true;
                    break;
                }
            }
        }
        return dp.back();
    }
};
