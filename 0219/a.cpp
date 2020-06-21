const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> temp_map;
        for (int i = nums.size() - 1; i >= 0; --i) {
            if (temp_map[nums[i]] == 0) {
                temp_map[nums[i]] = i;
            } else {
                if (abs(temp_map[nums[i]] - i) <= k) {
                    return true;
                } else {
                    temp_map[nums[i]] = i;
                }
            }
        }
        return false;
    }
};
