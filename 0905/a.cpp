const int ZERO = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < A.size(); ++i) {
            if (A[i] % 2 == 0) {
                even.push_back(A[i]);
            } else {
                odd.push_back(A[i]);
            }
        }
        for (int i = 0; i < even.size(); ++i) {
            A[i] = even[i];
        }
        for (int i = even.size(); i < A.size(); ++i) {
            A[i] = odd[i - even.size()];
        }
        return A;
    }
};
