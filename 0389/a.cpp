const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;
        for (auto c : s) {
            ++s_map[c];
        }
        for (auto c : t) {
            ++t_map[c];
        }
        for (auto c : t) {
            if (t_map[c] != s_map[c]) {
                return c;
            }
        }
        return {};
    }
};
