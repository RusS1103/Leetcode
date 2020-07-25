const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int, vector<int>> temp_stack;
        vector<int> result(T.size());
        for (int i = T.size() - 1; i >= 0; --i) {
            while (!temp_stack.empty() && T[i] >= T[temp_stack.top()]) {
                temp_stack.pop();
            }
            result[i] = temp_stack.empty() ? 0 : temp_stack.top() - i;
            temp_stack.push(i);
        }
        return result;
    }
};
