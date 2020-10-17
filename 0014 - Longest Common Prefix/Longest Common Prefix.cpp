const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if (strs.size() == 0) {
            return {};
        } else {
            string min = *min_element(strs.begin(), strs.end());
            int j = 0;
            while (j != min.size()) {
                int prefix_i = 0;
                for (size_t i = 0; i < strs.size() - 1; ++i) {
                    if (strs[i][j] == strs[i + 1][j]) {
                        ++prefix_i;
                    }
                }
                if (prefix_i == strs.size() - 1) {
                    ++j;
                } else {
                    break;
                }
            }
            return {min.begin(), next(min.begin(), j)};
        }
    }
};
