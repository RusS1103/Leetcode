class Solution {
public:
    string reverseWords(string& s) {
        if (s.size() == 0) {
            return {};
        }
        string result = "";
        stringstream ss(s);
        while (ss >> s) {
            reverse(s.begin(), s.end());
            result += s + " ";
        }
        return string(result.begin(), prev(result.end()));
    }
};
