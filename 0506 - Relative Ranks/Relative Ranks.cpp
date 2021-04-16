class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int, int> scores;
        vector<int> temp_score = score;
        sort(temp_score.begin(), temp_score.end());
        vector<string> result(score.size());
        
        for (int i = 1; i <= score.size(); ++i) {
            scores[temp_score[i - 1]] = score.size() - i + 1;
        }
        
        for (int i = 0; i < score.size(); ++i) {
            if (scores[score[i]] == 1) {
                result[i] = "Gold Medal";
            } else if (scores[score[i]] == 2) {
                result[i] = "Silver Medal";
            } else if (scores[score[i]] == 3) {
                result[i] = "Bronze Medal";
            } else {
                result[i] = to_string(scores[score[i]]);
            }
        }
        
        return result;
    }
};
