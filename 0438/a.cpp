const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> findAnagrams(const string& s, const string& p) {
        vector<int> result;
        int sSize = s.size();
        int pSize = p.size();
        vector<int> pArr(26, 0);
        for (int i = 0; i < p.size(); ++i) {
            pArr[p[i] - 'a'] += 1;
        }
        for (int i = 0; i <= sSize - pSize; ++i) {
            vector<int> sArr(26, 0);
            for (int j = i; j < i + p.size(); ++j) {
                sArr[s[j] - 'a'] += 1;
            }
            if (sArr == pArr) {
                result.push_back(i);
            }
        }
        return result;
    }
};
