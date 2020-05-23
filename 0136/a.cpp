const int ZERO = [](){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        return 0;
}();

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> dict;
        for (auto now : nums) {
            ++dict[now];
        }
        for (auto now : dict) {
            if (now.second == 1) {
                return now.first;
            }
        }
        return {};
    }
};
