class Solution {
public:
    int maxProduct(const vector<string>& words) {
        if (words.size() == 0) {
            return {};
        }
        int size = words.size();
        int result = 0;
        vector<int> values(words.size(), 0);
        for (int i = 0; i < words.size(); ++i) {
            for (int j = 0; j < words[i].size(); ++j) {
                values[i] |= 1 << (words[i][j] - 'a');
            }
        }
        for (int i = 0; i < words.size() - 1; ++i) {
            for (int j = i + 1; j < words.size(); ++j) {
                if ((values[i] & values[j]) == 0 && (words[i].size() * words[j].size() > result)) {
                    result = words[i].size() * words[j].size();
                }
            }
        }
        return result;
    }
};
