class Solution {
public:
    int numIdenticalPairs(const vector<int>& nums) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i) {
            ++m[nums[i]];
        }
        int result = 0;
        for (const auto p : m) {
            result += (p.second - 1) * (p.second) / 2;
        }
        return result;
    }
};
