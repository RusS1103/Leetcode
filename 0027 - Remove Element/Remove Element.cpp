// const int ZERO = []() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     return 0;
// }();

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (size_t j = 0; j < nums.size(); ++j) {
            if (nums[j] != val) {
                nums[i] = nums[j];
                ++i;
            }
        }
        return i;
    }
};
