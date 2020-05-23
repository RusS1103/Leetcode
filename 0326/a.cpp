const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool isPowerOfThree(int n) {
    if (n == 1) {
        return true;
    }
        
    if (n == 0) {
        return false;
    }
    while (true) {
        if (n % 3 == 0) {
            n /= 3;
        } else {
            break;
        }
        if (n == 1) {
            return true;
        }
    }
    return false;
    }
};
