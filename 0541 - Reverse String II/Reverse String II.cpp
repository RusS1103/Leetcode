const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string reverseStr(string& s, int k) {
        for (int start = 0; start < s.size(); start += 2 * k) {
            int i = start, j = min(start + k - 1, s.size() - 1);
            while (i < j) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
    
    int min(int a, int b) {
        return a < b ? a : b;
    }
};
