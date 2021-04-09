class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> remainders(60, 0);
        int count = 0;
        for (int i = 0; i < time.size(); ++i) {
            if (time[i] % 60 == 0) {
                count += remainders[0];
            } else {
                count += remainders[60 - time[i] % 60];
            }
            ++remainders[time[i] % 60];
        }
        return count;
    }
};
