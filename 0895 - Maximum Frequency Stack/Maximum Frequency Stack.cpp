class FreqStack {
public:
    FreqStack() {
        max_freq = 0;
    }
    
    void push(int x) {
        frequency[++numbers[x]].push(x);
        max_freq = max(max_freq, numbers[x]);
    }
    
    int pop() {
        int number = frequency[max_freq].top();
        --numbers[number];
        frequency[max_freq].pop();
        if (frequency[max_freq].empty()) {
            --max_freq;
        }
        return number;
    }
    unordered_map<int, int> numbers;
    unordered_map<int, stack<int, vector<int>>> frequency;
    int max_freq;
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */
