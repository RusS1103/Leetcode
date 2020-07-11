class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int fact = 1;
        for (int i = 1; i <= nums.size(); ++i) {
            fact *= i;
        }
        vector<vector<int>> result;
        result.reserve(fact);
        for (int i = 0; i < fact; ++i) {
            result.push_back(nums);
            next_permute(nums);
        }
        return result;
    }
    
    void next_permute(vector<int>& nums) {
        int i = nums.size() - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            --i;
        }
        int j = nums.size() - 1;
        if (i >= 0) {
            while (j >= 0 && nums[i] >= nums[j]) {
                --j;
            }
            swap(nums[i], nums[j]);
        }
        reverse(next(nums.begin(), i + 1), nums.end());
    }
};
