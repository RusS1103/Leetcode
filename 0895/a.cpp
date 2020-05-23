const int ZERO = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class FreqStack {
public:
    FreqStack() {}
    
    void push(int x) {
        ++frequency[x];
        latest[frequency[x]].push(x);
        max_frequency = max(max_frequency, frequency[x]);
    }
    
    int pop() {
        auto top = latest[max_frequency].top();
        latest[max_frequency].pop();
        if (latest[max_frequency].size() == 0) {
            --max_frequency;
        }
        --frequency[top];
        return top;
    }

    unordered_map<int, stack<int>> latest;
    unordered_map<int, int> frequency;
    int max_frequency = 0;
};
