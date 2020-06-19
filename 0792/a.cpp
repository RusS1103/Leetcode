const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int numMatchingSubseq(string S, vector<string>& words) {
        int k = 0;
        unordered_map<string, bool> temp;
        for (string& word : words) {
            if (temp.find(word) == temp.end()) {
                bool iS = isSub(S, word);
                temp[word] = iS;
                k += temp[word];
            } else {
                k += temp[word];
            }
        }
        return k;
    }
    
    bool isSub(string& s, string& t) {
        int n = s.size(), m = t.size();
        int j = 0;
        for (int i = 0; i < n; ++i) {
            if (j < m && s[i] == t[j]) {
                ++j;
            }
        }
        if (j == m) {
            return true;
        }
        return false;
    }
};
