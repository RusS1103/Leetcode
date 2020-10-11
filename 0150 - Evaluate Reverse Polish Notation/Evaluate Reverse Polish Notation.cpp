class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int, vector<int>> stack;
        for (const string& token : tokens) {
            if (token == "+") {
                int second = stack.top();
                stack.pop();
                stack.top() += second;
            } else if (token == "-") {
                int second = stack.top();
                stack.pop();
                stack.top() -= second;
            } else if (token == "*") {
                int second = stack.top();
                stack.pop();
                stack.top() *= second;
            } else if (token == "/") {
                int second = stack.top();
                stack.pop();
                stack.top() /= second;
            } else {
                stack.push(stoi(token));
            }
        }
        return stack.top();
    }
};
