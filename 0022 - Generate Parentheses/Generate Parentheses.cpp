const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        int open = 0, close = 0;
        helper(0, 0, "", n);
        return result;
    }
    
    void helper(int open, int close, string s, int max) {
        if (max * 2 == s.size()) {
            result.push_back(s);
            return;
        }
        if (open < max) helper(open + 1, close, s + "(", max);
        if (close < open) helper(open, close + 1, s + ")", max);
    }
};
