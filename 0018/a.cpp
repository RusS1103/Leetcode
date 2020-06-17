const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() <= 3) {
            return {};
        }
        set<vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 3; ++i) {
            if (i == 0 || nums[i] != nums[i - 1]) {
                for (int j = i + 1; j < n - 2; ++j) {
                    int low = j + 1, high = n - 1;
                    while (low < high) {
                        int sum = nums[i] + nums[j] + nums[low] + nums[high];
                        if (sum == target) {
                        result.insert({nums[i], nums[j], nums[low], nums[high]});                             while (low < high && nums[low] == nums[low + 1]) {
                            ++low;
                        }
                        while (low < high && nums[high] == nums[high - 1]) {
                            --high;
                        }
                        ++low;
                        --high;
                        } else if (sum > target) {
                            --high;
                        } else {
                            ++low;
                        }
                    }
                }
            }
        }
        
        vector<vector<int>> res;
        for (auto now : result) {
            res.push_back(now);
        }
        return res;
    }
};
