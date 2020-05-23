class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int, vector<int>> hash;
    unordered_map<int, int> to_to;
    for (int i = nums2.size() - 1; i >= 0; --i) {
        if (hash.empty()) {
            to_to[nums2[i]] = -1;
            hash.push(nums2[i]);
        } else {
            if (nums2[i] < hash.top()) {
                to_to[nums2[i]] = hash.top();
                hash.push(nums2[i]);
            } else {
                while (true) {
                    hash.pop();
                    if (hash.empty()) {
                        to_to[nums2[i]] = -1;
                        hash.push(nums2[i]);
                        break;
                    } else {
                        if (nums2[i] < hash.top()) {
                            to_to[nums2[i]] = hash.top();
                            hash.push(nums2[i]);
                            break;
                        }
                    }
                }
            }
        }
    }
    vector<int> result;
    for (size_t i = 0; i < nums1.size(); ++i) {
        result.push_back(to_to[nums1[i]]);
    }
    return result;
}
};
