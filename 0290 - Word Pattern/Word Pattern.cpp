class Solution {
public:
    bool wordPattern(string pattern, string str) {
        unordered_map<char, string> chstr;
        unordered_map<string, char> strch;
        vector<string> words;
        stringstream ss(str);
        string s;
        while (ss >> s) {
            words.push_back(s);
        }
        if (pattern.size() != words.size()) {
            return false;
        }
        for (int i = 0; i < pattern.size(); ++i) {
            if (chstr.count(pattern[i]) == 0 && strch.count(words[i]) == 0) {
                chstr[pattern[i]] = words[i];
                strch[words[i]] = pattern[i];
            } else {
                if (chstr[pattern[i]] != words[i] || strch[words[i]] != pattern[i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
