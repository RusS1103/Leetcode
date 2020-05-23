const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    int titleToNumber(string s) {
        int temp = s.size();
        int sum = 0;
        for (size_t i = 0; i < temp; ++i) {
            sum += (s[i] - 'A' + 1) * pow(26, temp - i - 1);
        }
        return sum;
    }
};
