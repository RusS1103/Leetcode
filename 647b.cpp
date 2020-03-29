const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
   void countSubstrings(int first, int last, string s, int& count) {
    while (0 <= first && last <= s.size() && s[first] == s[last]) {
        ++count;
        --first;
        ++last;
    }
}

int countSubstrings(string s) {
    int count = 0;
    for (size_t i = 0; i < s.size(); ++i) {
        countSubstrings(i, i, s, count);
    }
    for (size_t i = 0; i < s.size(); ++i) {
        countSubstrings(i, i + 1, s, count);
    }
    return count;
}
};
