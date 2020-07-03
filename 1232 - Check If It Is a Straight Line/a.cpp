const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        for (int i = 2; i < coordinates.size(); ++i) {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            if (x2 != x1 && y2 != y1) {
                if ((x - x1) * (y2 - y1) != (x2 - x1) * (y - y1)) return false;
            } else if (x2 != x1) {
                if (y != y1) return false;
            } else {
                if (x != x1) return false;
            }
        }
        return true;
    }
};
