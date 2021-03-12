const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool hasAllCodes(const string& s, int k) {
        unordered_set<string> temp_set;
        for (int i = 0; i + k <= s.size(); ++i) {
            temp_set.insert(s.substr(i, k));
        }
        return temp_set.size() == pow(2, k); 
    }
};
