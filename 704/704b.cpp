const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = (int)nums.size() - 1;
        int mid = (left + right) / 2;
        while (left <= right) {
            if (target < nums[mid]) {
                right = mid - 1;
            } else if (target > nums[mid]) {
                left = mid + 1;
            } else {
                return mid;
            }
            mid = (left + right) / 2;
        }
        return -1;
    }
};
