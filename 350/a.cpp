const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_multiset<int> hash;
        for (auto now : nums1) {
            hash.insert(now);
        }
        vector<int> ans;
        for (auto now : nums2) {
            if (hash.find(now) != hash.end()) {
                ans.push_back(now);
                hash.erase(hash.find(now));
            }
        }
        return ans;
    }
};
