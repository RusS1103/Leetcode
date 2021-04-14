class Solution {
public:
    bool isAlienSorted(const vector<string>& words, const string& order) {
        unordered_map<char, int> alphabet;
        for (int i = 0; i < order.size(); ++i) {
            alphabet[order[i]] = i;
        }
        for (int i = 0; i < words.size() - 1; ++i) {
            if (!compare(words[i], words[i + 1], alphabet)) {
                return false;
            }
        }
        return true;
    }
    
    bool compare(const string& first, const string& second, unordered_map<char, int> alphabet) {
        for (int i = 0; i < min(first.size(), second.size()); ++i) {
            if (first[i] != second[i]) {
                return alphabet[first[i]] < alphabet[second[i]];
            }
        }
        return first.size() <= second.size();
    }
};
