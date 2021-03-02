class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result(2, 0);
        unordered_map<int, int> temp_map;
        for (const auto& num : nums) {
            ++temp_map[num];
        }
        for (const auto& now : temp_map) {
            if (now.second == 2) {
                result[0] = now.first;
            }
        }
        int temp = 1;
        while (temp_map.count(temp)) {
            ++temp;
        }
        result[1] = temp;
        return result;
    }
};
