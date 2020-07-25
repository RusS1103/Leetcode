class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> p;
        p.push_back(p1);
        p.push_back(p2);
        p.push_back(p3);
        p.push_back(p4);
        sort(p.begin(), p.end());
        return distance(p[0], p[1]) != 0 && distance(p[0], p[1]) == distance(p[1], p[3]) && distance(p[1], p[3]) == distance(p[3], p[2]) && distance(p[3], p[2]) == distance(p[2], p[0]) && distance(p[0], p[3]) == distance(p[1], p[2]);
    }
    
    int distance(const vector<int>& first, const vector<int>& second) {
        return (second[1] - first[1]) * (second[1] - first[1]) + (second[0] - first[0]) * (second[0] - first[0]);
    }
};
