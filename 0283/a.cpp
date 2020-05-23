const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int k = 0;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (nums[i] != 0) {
            nums[k] = nums[i];
            ++k;
        }
    }
    for (size_t i = k; i < nums.size(); ++i) {
        nums[i] = 0;
    }
    }
};
