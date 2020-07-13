const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int fact = 1;
        vector<vector<int>> result;
        for (int i = 1; i <= nums.size(); ++i) {
            fact *= i;
        }
        set<vector<int>> temp_set;
        for (int i = 0; i < fact; ++i) {
            temp_set.insert(nums);
            next_permute(nums);
        }
        
        for (auto vec : temp_set) {
            result.push_back(vec);
        }
        return result;
    }
    
    void next_permute(vector<int>& nums) {
        int i = nums.size() - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            --i;
        }
        if (i >= 0) {
            int j = nums.size() - 1;
            while (j >= 0 && nums[i] >= nums[j]) {
                --j;
            }
            swap(nums[i], nums[j]);
        }
        reverse(next(nums.begin(), i + 1), nums.end());
    }  
};
