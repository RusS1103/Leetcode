class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        int left = 0;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += nums[i];
            while (sum >= s) {
                ans = min(ans, i + 1 - left);
                sum -= nums[left++];
            }
        }
        return ans == INT_MAX ? 0 : ans;
    }
};
