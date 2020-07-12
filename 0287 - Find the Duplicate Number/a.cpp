const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int findDuplicate(const vector<int>& nums) {
        unordered_map<int, int> numbers;
        for (auto now : nums) {
            ++numbers[now];
        }
        for (auto now : nums) {
            if (numbers[now] > 1) {
                return now;
            }
        }
        return {};
    }
};
