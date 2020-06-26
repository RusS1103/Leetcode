const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 0 || num == 1) {
            return false;
        }
        int sum = 0;
        for (int i = 2; i <= sqrt(num); ++i) {
            if (num % i == 0 ) {
                if (i * i != num) {
                    sum += i + num / i;;
                } else {
                    sum += i;
                }
            }
        }
        return sum + 1 == num;
    }
};
