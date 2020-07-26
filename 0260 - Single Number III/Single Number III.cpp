const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            ++hash[nums[i]];
        }
        vector<int> ans;
        for (auto now : hash) {
            if (now.second == 1) {
                ans.push_back(now.first);
            }
        }
        return ans;
    }
};
