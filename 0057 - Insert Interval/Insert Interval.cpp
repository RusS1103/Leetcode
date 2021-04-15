const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(), [](vector<int>& first, vector<int>& second) {
            return first[0] < second[0];
        });
        result.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); ++i) {
            if (intervals[i][0] <= result.back()[1]) {
                result.back()[1] = max(intervals[i][1], result.back()[1]);
            } else {
                result.push_back({intervals[i][0], intervals[i][1]});
            }
        }
        return result;
    }
};
