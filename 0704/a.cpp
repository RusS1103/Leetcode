const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it = lower_bound(nums.begin(), nums.end(), target);
        if (it == nums.end()) {
            return -1;
        } else if (target < *it) {
            return -1;
        } else {
            return distance(nums.begin(), it);
        }
    }
};
