class Solution {
public:
    void change(char& c) {
    c = c - 'A' + 'a';
    }
    
bool isPalindrome(string s) {
    string new_s = "";
    for (size_t i = 0; i < s.size(); ++i) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            change(s[i]);
        }
    }
    for (auto c : s) {
        if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z' || '0' <= c && c<= '9') {
            new_s.push_back(c);
        }
    }
    string total_s = new_s;
    reverse(new_s.begin(), new_s.end());
    return total_s == new_s;
    }
};
