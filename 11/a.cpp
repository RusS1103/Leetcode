const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1, maxS = 0;
        while (l < r) {
            maxS = max(maxS, min(height[l], height[r]) * (r - l));
            
            if (height[l] < height[r]) {
                ++l;
            } else {
                --r;
            }
        } 
        return maxS;
    }
};
