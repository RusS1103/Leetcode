class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxNegative = (nums[nums.size() - 1]  - 1) * (nums[nums.size() - 2] - 1);
        int maxPositive = (nums[0] - 1) * (nums[1] - 1);
        return maxNegative < maxPositive ? maxPositive : maxNegative;
    }
};
