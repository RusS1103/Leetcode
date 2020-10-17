class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        x = abs(x);
        string temp_string = to_string(x);
        string our_string = temp_string;
        reverse(temp_string.begin(), temp_string.end());
        return our_string == temp_string;
    }
};
