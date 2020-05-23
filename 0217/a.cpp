const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    set<int> total;
    for (auto now : nums) {
        total.insert(now);
    }
    return total.size() != nums.size();
    }
};
