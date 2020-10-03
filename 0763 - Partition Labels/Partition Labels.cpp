class Solution {
public:
    vector<int> partitionLabels(const string& s) {
        int metka = 0;
        vector<int> last(26, 0);
        vector<int> result;
        for (int i = 0; i < s.size(); ++i) {
            last[s[i] - 'a'] = i;
        }
        int j = 0;
        for (int i = 0; i < s.size(); ++i) {
            j = max(j, last[s[i] - 'a']);
            if (i == j) {
                result.push_back(i - metka + 1);
                metka = i + 1;
            }
        }
        return result;
    }
};
