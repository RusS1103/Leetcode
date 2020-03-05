const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        int sum = nums[0];
        int best = nums[0];
        for (size_t i = 1; i < nums.size(); ++i) {
            sum = max(nums[i], nums[i] + sum);
            best = max(best, sum);
        }
        return best;
    }
};
