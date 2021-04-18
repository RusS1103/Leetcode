class Solution {
public:
    vector<int> minOperations(const string& boxes) {
        vector<int> result(boxes.size());
        for (int i = 0, cnt = 0, ops = 0; i < boxes.size(); ++i) {
            result[i] += ops;
            cnt += boxes[i] == '1' ? 1 : 0;
            ops += cnt;
        }
        for (int i = boxes.size() - 1, cnt = 0, ops = 0; i >= 0; --i) {
            result[i] += ops;
            cnt += boxes[i] == '1' ? 1 : 0;
            ops += cnt;
        }
        return result;
    }
};
