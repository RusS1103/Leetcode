class Solution {
public:
    vector<int> nextGreaterElement(
        const vector<int>& nums1,
        const vector<int>& nums2
    ) {
        unordered_map<int, int> greater;
        stack<int, vector<int>> hash;
        for (int i = (int)nums2.size() - 1; i >= 0; --i) {
            while (!hash.empty() && nums2[i] >= hash.top()) {
                hash.pop();
            }
            if (hash.empty()) {
                greater[nums2[i]] = -1;
            } else {
                greater[nums2[i]] = hash.top();
            }
            hash.push(nums2[i]);
        }
        vector<int> ans(nums1.size());
        for (size_t i = 0; i < nums1.size(); ++i) {
            ans[i] = greater[nums1[i]];
        }
        return ans;
    }
};
