const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string countAndSay(int n) {
        string res = "1";
        for (int i = 0; i < n - 1; ++i) {
            int x = 1;
            string temp = "";
            for (int j = 0; j < res.size() - 1; ++j) {
                if (res[j] == res[j + 1]) {
                    ++x;
                } else {
                    temp += res[j] + to_string(x);
                    x = 1;
                }
            }
            temp += res[res.size() - 1] + to_string(x);
            res = temp;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
