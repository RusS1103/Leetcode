const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        set<int> temp_set;
        int i = 0, j = 0, ans = 0;
        while (i < s.size() && j < s.size()) {
            if (temp_set.count(s[j]) == 0) {
                temp_set.insert(s[j++]);
            } else {
                ans = max(ans, j - i);
                temp_set.erase(s[i++]);
            }
        }
        return max(ans, j - i);
    }
};
