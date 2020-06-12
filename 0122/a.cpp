const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxProfit(const vector<int>& nums) {
        int i = 0;
        int min = nums[0];
        int max = nums[0];
        int ans = 0;
        while (i < nums.size() - 1) {
            while (i < nums.size() - 1 && nums[i] >= nums[i + 1]) {
                ++i;
            }
            min = nums[i];
            while (i < nums.size() - 1 && nums[i] <= nums[i + 1]) {
                ++i;
            }
            max = nums[i];
            ans += max - min;
        }
        return ans;
    }
};
