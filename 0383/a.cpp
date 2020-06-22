class Solution {
public:
    bool canConstruct(const string& ransomNote, const string& magazine) {
        unordered_map<char, int> first_temp;
        unordered_map<char, int> second_temp;
        for (auto c : ransomNote) {
            ++first_temp[c];
        }
        for (auto c : magazine) {
            ++second_temp[c];
        }
        for (auto c : ransomNote) {
            if (first_temp[c] > second_temp[c]) {
                return false;
            }
        }
        return true;
    }
};
