class Solution {
public:
    vector<int> majorityElement(const vector<int>& nums) {
        int n = nums.size();
        int count1 = 0, count2 = 0;
        int candidate1 = INT_MAX, candidate2 = INT_MAX;
        for (int i = 0; i < n; ++i) {
            if (candidate1 == nums[i]) {
                ++count1;
            } else if (candidate2 == nums[i]) {
                ++count2;
            } else if (count1 == 0) {
                candidate1 = nums[i];
                count1 = 1;
            } else if (count2 == 0) {
                candidate2 = nums[i];
                count2 = 1;
            } else {
                --count1;
                --count2;
            }
        }
        vector<int> result;
        int x = 0, y = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == candidate1) {
                ++x;
            } else if (nums[i] == candidate2) {
                ++y;
            }
        }
        if (x > nums.size() / 3) {
            result.push_back(candidate1);
        }
        if (y > nums.size() / 3) {
            result.push_back(candidate2);
        }
        return result;
    }
};
