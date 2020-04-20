class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string line;
        while (ss >> line) {}
        return line.size();
    }
};
