const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string reverseWords(string& s) {
        vector<string> result;
        stringstream ss(s);
        while (ss >> s) {
            result.push_back(s);
        }
        if (result.size() == 0) {
            return {};
        }
        reverse(result.begin(), result.end());
        string res = "";
        for (int i = 0; i < result.size() - 1; ++i) {
            res += result[i] + " ";
        }
        res += result[result.size() - 1];
        return res;
    }
};
