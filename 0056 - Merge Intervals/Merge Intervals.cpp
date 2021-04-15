const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() <= 1) {
            return intervals;
        }
        sort(intervals.begin(), intervals.end(), [](const vector<int>& vec1, const vector<int>& vec2){
            return vec1[0] < vec2[0];
        });
        vector<vector<int>> res;
        res.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); ++i) {
            if (res.back()[1] >= intervals[i][0]) {
                res.back()[1] = max(res.back()[1], intervals[i][1]);
            } else {
                res.push_back({intervals[i][0], intervals[i][1]});
            }
        }
        return res;
    }
};
