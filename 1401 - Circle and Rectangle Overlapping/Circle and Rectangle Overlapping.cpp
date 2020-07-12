const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    bool checkOverlap(int radius, int x_center, int y_center, int x1, int y1, int x2, int y2) {
        for (int i = x1; i <= x2; ++i) {
            for (int j = y1; j <= y2; ++j) {
                if (compute(radius, x_center, y_center, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }
    
    bool compute(int radius, int x_center, int y_center, int x, int y) {
        float r = pow(x - x_center, 2) + pow(y - y_center, 2);
        if (r <= pow(radius, 2)) 
            return true;
        return false;
    }
};
