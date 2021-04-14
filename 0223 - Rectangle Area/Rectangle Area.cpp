class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int left = max(A, E), right = max(left, min(C, G));
        int bottom = max(B, F), top = max(bottom, min(H, D));
        return (C - A) * (D - B) - (right - left) * (top - bottom) + (G - E) * (H - F);
    }
};
