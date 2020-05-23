const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hash;
        for (auto now : nums1) {
        hash.insert(hash.end(), now);
        }
        vector<int> ans;
        for (auto now : nums2) {
            if (find(hash.begin(), hash.end(), now) != hash.end()) {
                ans.push_back(now);
                hash.erase(find(hash.begin(), hash.end(), now));
            }
        }
        return ans;
    }
};
