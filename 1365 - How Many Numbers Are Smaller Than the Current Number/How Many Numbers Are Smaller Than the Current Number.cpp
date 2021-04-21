class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> numbers(101, 0);
        vector<int> result(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i) {
            ++numbers[nums[i]];
        }
        for (int i = 1; i <= 100; ++i) {
            numbers[i] += numbers[i - 1];
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                result[i] = 0;
            } else {
                result[i] = numbers[nums[i] - 1];
            }
        }
        return result;
    }
};
