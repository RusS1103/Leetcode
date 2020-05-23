const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> hash;
        for (auto& str : strs) {
            int histogram[26] = {};
            for (auto c : str) {
                ++histogram[c - 'a'];
            }
        
            string key = "";
            for (char c = 'a'; c <= 'z'; ++c) {
                int count = histogram[c - 'a'];
                if (count == 1) {
                    key += c;
                } else if (count > 1) {
                    key += c;
                    key += to_string(count);
                }
            }
            hash[key].push_back(str);
        }
        ans.reserve(hash.size());
        for (auto& kv : hash) {
            ans.push_back(move(kv.second));
        }
        return ans;
    }
};
