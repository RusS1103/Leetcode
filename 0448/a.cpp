const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> findDisappearedNumbers(const vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i) {
            ++hash[nums[i]];
        }
        vector<int> result;
        for (int i = 1; i <= nums.size(); ++i) {
            if (hash[i] == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};
