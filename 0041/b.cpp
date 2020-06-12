const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            if (nums[i] == 1) {
                flag = true;
            }
        }
        if (!flag) {
            return 1;
        } else {
            for (int i = 0; i < n; ++i) {
                if (nums[i] <= 0 || nums[i] > n) {
                    nums[i] = 1;
                }
            }
        }
         for (int i = 0; i < n; ++i) {
            int index = abs(nums[i]) - 1;
            if (nums[index] > 0) {
                nums[index] *= -1;
            }
        }
            
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) {
                return i + 1;
            }
        }
            
        return nums.size() + 1;
            
    }
};
