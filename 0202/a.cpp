class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while (n != 1) {
            int sum = 0;
            int current_num = n;
            while (current_num != 0) {
                sum += (current_num % 10) * (current_num % 10);
                current_num /= 10;
            }
        
            if (s.count(sum) != 0) {
                return false;
            }
        
            n = sum;
            s.insert(sum);
        }
        return true;
    }
};
