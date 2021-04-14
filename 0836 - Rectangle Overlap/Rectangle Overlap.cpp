class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int left = max(rec1[0], rec2[0]), right = max(min(rec1[2], rec2[2]), left);
        int bottom = max(rec1[1], rec2[1]), top = max(min(rec1[3], rec2[3]), bottom);
        return !(right == left || top == bottom);
    }
};
