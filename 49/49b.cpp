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
        for (const auto& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            hash[key].push_back(str);
        }
        ans.reserve(hash.size());
        for (auto& kv : hash) {
            ans.push_back(move(kv.second));
        }
        return ans;
    }
};
