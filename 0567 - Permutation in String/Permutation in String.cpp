class Solution {
public:
    bool checkInclusion(const string& s1, const string& s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
        vector<int> first_hash(26, 0);
        vector<int> second_hash(26, 0);
        for (int i = 0; i < s1.size(); ++i) {
            ++first_hash[s1[i] - 'a'];
            ++second_hash[s2[i] - 'a'];
        }
        if (first_hash == second_hash) {
            return true;
        }
        for (int i = s1.size(); i < s2.size(); ++i) {
            --second_hash[s2[i - s1.size()] - 'a'];
            ++second_hash[s2[i] - 'a'];
            if (first_hash == second_hash) {
                return true;
            }
        }
        return false;
    }
};
