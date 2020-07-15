class Solution {
public:
    string convertToTitle(int n) {
        string res = "";
        while (n--) {
            res += 'A' + n % 26;
            n /= 26;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
