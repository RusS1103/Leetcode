const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }
    
    vector<int> chars(26, 0);
    for (size_t i = 0; i < s.size(); ++i) {
        ++chars[s[i] - 'a'];
        --chars[t[i] - 'a'];
    }
    for (auto now : chars) {
        if (now != 0) {
            return false;
        }
    }
    return true;
}
};
