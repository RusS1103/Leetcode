const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> intersection(const vector<int>& nums1, const vector<int>& nums2) {
        unordered_map<int, int> hash1;
        unordered_map<int, int> hash2;
        vector<int> result;
        for (auto num : nums1) {
            ++hash1[num];
        }
        for (auto num : nums2) {
            ++hash2[num];
        }
        for (auto num : hash1) {
            if (hash2[num.first] != 0) {
                result.push_back(num.first);
            }
        }
        return result;
    }
};
