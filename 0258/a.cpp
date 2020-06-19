const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    int addDigits(int num) {
        int result = 0;
        if (num == 0) {
            return 0;
        }
        while (!(1 <= num && num <= 9)) {
            int temp = num;
            int sum = 0;
            while (temp != 0) {
                int x = temp % 10;
                sum += x;
                temp /= 10;
            }
            num = sum;
        }
        return num;
    }
};
