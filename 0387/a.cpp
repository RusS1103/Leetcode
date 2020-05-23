const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int firstUniqChar(const string& s) {
    unordered_map<char, int> hash;
    for (auto c : s) {
        ++hash[c];
    }
    for (size_t i = 0; i < s.size(); ++i) {
        if (hash[s[i]] == 1) {
            return i;
        }
    }
    return -1;
    }
};
