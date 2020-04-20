const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    bool isValid(string s) {
        stack<char, vector<char>> now;
        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                now.push(c);
            } else {
                if (c == ')') {
                    c = '(';
                }
                if (c == '}') {
                    c = '{';
                }
                if (c == ']') {
                    c = '[';
                }
                if (now.empty()) {
                    return false;
                }
                if (c == now.top()) {
                    now.pop();
                } else {
                    break;
                }
            }
        }
        if (now.size() == 0) {
            return true;
        }
        return false;
    }
};
