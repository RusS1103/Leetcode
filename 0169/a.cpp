const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> count;
        for (auto now : nums) {
            ++count[now];
        }
        for (auto now : count) {
            if (now.second > nums.size() / 2) {
                return now.first;
            }
        }
        return {};
    }
};
