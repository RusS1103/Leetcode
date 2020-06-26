class Solution {
public:
    bool isPerfectSquare(int num) {
        int k = 0;
        for (int i = 1; i <= sqrt(num); ++i) {
            if (num % i == 0) {
                if (i * i == num)
                    ++k;
                else
                    k += 2;
            }
        }
        return k % 2 == 1;
    }
};
