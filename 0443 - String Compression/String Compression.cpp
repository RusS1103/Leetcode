class Solution {
public:
    int compress(vector<char>& chars) {
        int result = 0, i = 0;
        while (i < chars.size()) {
            int count = 0;
            char currentChar = chars[i];
            while (i < chars.size() && chars[i] == currentChar) {
                ++i;
                ++count;
            }
            chars[result++] = currentChar;
            
            if (count != 1) {
                for (auto c : to_string(count)) {
                    chars[result++] = c;
                }
            }
        }
        return result;
    }
};
