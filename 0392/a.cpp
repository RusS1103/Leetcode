class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        int i = 0;
        for (int j = 0; j < m; ++j) {
            if (i < n && t[j] == s[i]) {
                ++i;
            }
        }
        if (i == n) {
            return true;
        }
        return false;
    }
};
