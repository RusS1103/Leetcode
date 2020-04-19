const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> hash_map;
        int ans = 0;
        for (size_t i = 0; i < nums.size(); ++i) {
            ++hash_map[nums[i]];
        }
        for (size_t i = 0; i < nums.size(); ++i) {
            int current_num = nums[i];
            int current_size = 0;
            if (!hash_map.count(nums[i] - 1)) {
                while (hash_map.count(current_num)) {
                    ++current_num;
                    ++current_size;
                }
                ans = max(ans, current_size);
            }
        }
        return ans;
    }
};
