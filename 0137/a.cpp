class Solution {
public:
    int singleNumber(const vector<int>& nums) {
        unordered_map<int, int> temp;
        for (int i = 0; i < nums.size(); ++i) {
            ++temp[nums[i]];
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (temp[nums[i]] == 1) {
                return nums[i];
            }
        }
        return {};
    }
};
