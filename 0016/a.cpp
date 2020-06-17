const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        if (nums.size() <= 2) {
            return 0;
        }
        long long res = INT_MAX;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; ++i) {
            int low = i + 1, high = n - 1;
            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                if (sum == target) {
                    ++low;
                    --high;
                } else if (sum > target) {
                    --high;
                } else {
                    ++low;
                }
                if (abs(sum - target) < abs(res - target)) {
                    res = sum;
                }
            }
        }
        return (int)res;
    }
};
