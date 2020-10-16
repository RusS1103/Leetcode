const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

struct Solution {
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> un_map;
        for (int i = 0; i < (int)nums.size(); ++i) {
            int balance = target - nums[i];
            if (un_map.count(balance) != 0) {
                return {i, un_map[balance]};
            }
            un_map[nums[i]] = i;
        }
        return {};
    }
};
