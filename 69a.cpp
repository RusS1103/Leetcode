const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int mySqrt(int x) {
    if (x == sqrt(x)) {
        return x;
    } else {
        return int(sqrt(x));
    }
}
};
