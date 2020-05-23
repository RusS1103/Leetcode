const int ZERO = [](){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    return 0;
}();

class Solution {
public:
    int missingNumber(const vector<int>& nums) {
    int result = nums.size() * (nums.size() + 1) / 2;
    for (auto now : nums) {
        result -= now;
    }
    return result;
    }
};
