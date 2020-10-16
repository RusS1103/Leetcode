class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() == 0) {
            return {};
        }
        int ans = 0;
        int size = height.size();
        vector<int> left_max(size), right_max(size);
        left_max[0] = height[0];
        for (int i = 1; i < size; ++i) {
            left_max[i] = max(left_max[i - 1], height[i]);
        }
        right_max[size - 1] = height[size - 1];
        for (int i = size - 2; i >= 0; --i) {
            right_max[i] = max(right_max[i + 1], height[i]);
        }
        
        for (int i = 1; i < size - 1; ++i) {
            ans += min(left_max[i], right_max[i]) - height[i];
        }
        return ans;
    }
};
