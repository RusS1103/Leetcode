const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char, int>> temp_vec;
        map<char, int> temp_map;
        for (int i = 0; i < s.size(); ++i) {
            ++temp_map[s[i]];
        }
        for (auto now : temp_map) {
            temp_vec.push_back(now);
        }
        sort(temp_vec.begin(), temp_vec.end(), [](pair<char, int>& f, pair<char, int>& s) {
            return f.second > s.second;
        });
        string result = "";
        for (auto now : temp_vec) {
            for (int i = 0; i < now.second; ++i) {
                result += now.first;
            }
        }
        return result;
    }
};
