class Solution {
public:
    string interpret(string& command) {
        int j = 0;
        for (int i = 0; i < command.size(); ++i) {
            if (command[i] == '(') {
                if (command[i + 1] == ')') {
                    command[j] = 'o';
                    ++i;
                    ++j;
                } else {
                    command[j] = 'a';
                    command[j + 1] = 'l';
                    i += 3;
                    j += 2;
                }
            } else {
                command[j] = 'G';
                ++j;
            }
        }
        return command.substr(0, j);
    }
};
