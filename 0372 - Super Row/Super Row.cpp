const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int pow(int x, int y) {
        if (y == 0) {
            return 1;
        }
        x %= 1337;
        if (y == 1) {
            return x;
        }
        return pow(x, y / 2) * pow(x, y - y / 2) % 1337;
    }
    
    int superPow(int a, vector<int>& b) {
        int res = 1;
        for (int i = 0; i < b.size(); ++i) {
            res = pow(res, 10) * pow(a, b[i]) % 1337;
        }
        return res;
    }
};

