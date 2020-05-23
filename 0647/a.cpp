const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

int countSubstrings(string s) {
    int count = 0;
    vector<vector<bool>> isPalindrome(s.size(), vector<bool>(s.size()));
    for (size_t last = 0; last < s.size(); ++last) {
        for (size_t first = 0; first <= last; ++first) {
            if (first == last) {
                isPalindrome[first][last] = true;
            } else if (first + 1 == last) {
                if (s[first] == s[last]) {
                    isPalindrome[first][last] = true;
                }
            } else {
                if (isPalindrome[first + 1][last - 1] && s[first] == s[last]) {
                    isPalindrome[first][last] = true;
                }
            }
            if (isPalindrome[first][last]) {
                ++count;
            }
        }
    }
    return count;
}
