const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isIsomorphic(const string& s, const string& t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, char> st;
        unordered_map<char, char> ts;
        for (int i = 0; i < s.size(); ++i) {
            if (st.find(s[i]) != st.end() && st[s[i]] != t[i] 
               || ts.find(t[i]) != ts.end() && ts[t[i]] != s[i]) {
                return false;
            }
            st[s[i]] = t[i];
            ts[t[i]] = s[i];
        }
        return true;
    }
};
