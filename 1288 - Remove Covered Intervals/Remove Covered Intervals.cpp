const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

bool cmp(vector<int>& first, vector<int>& second) {
    if (first[0] == second[0]) {
        return first[1] > second[1];
    }
    return first[0] < second[0];
}


class Solution {
public:
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        if (intervals.size() == 0) {
            return {};
        }
        sort(intervals.begin(), intervals.end(), cmp);
        int start = intervals[0][0], end = intervals[0][1];
        int result = 1;
        for (int i = 1; i < intervals.size(); ++i) {
            if (start <= intervals[i][0] && end >= intervals[i][1]) {
                continue;
            } else {
                start = min(start, intervals[i][0]);
                end = max(end, intervals[i][1]);
                ++result;
            }
        }
        return result;
    }
};
