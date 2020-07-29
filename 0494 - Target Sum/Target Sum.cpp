const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        return dfs(nums, 0, S);
    }
    int dfs(vector<int>& nums, int start, long long target) {
        if (start == nums.size()) return target == 0;
        return dfs(nums, start + 1, target - nums[start]) + dfs(nums, start + 1, target + nums[start]);
    }
};
