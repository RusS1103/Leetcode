class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int, vector<int>> s;
        int first = 0, second = 0;
        while (second != popped.size() && first != popped.size()) {
            while (!s.empty() && second != popped.size() && popped[second] == s.top()) {
                ++second;
                s.pop();
            }
            s.push(pushed[first]);
            ++first;
            while (!s.empty() && second != popped.size() && popped[second] == s.top()) {
                ++second;
                s.pop()
            }
        }
        return s.empty() ? true : false;
    }
};
