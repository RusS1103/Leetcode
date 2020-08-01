const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int combinationSum4(const vector<int>& nums, int target) {
        vector<unsigned long long> temp(target + 1, 0);
        temp[0] = 1;
        for (int i = 1; i <= target; ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (i - nums[j] >= 0) {
                    temp[i] += temp[i - nums[j]];
                }
            }
        }
        return temp[target];
    }
};
