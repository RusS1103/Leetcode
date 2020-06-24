class Solution {
public:
    int countSegments(const string& s) {
        stringstream ss(s);
        string temp = s;
        int k = 0;
        while (ss >> temp) {
            ++k;
        }
        return k;
    }
};
