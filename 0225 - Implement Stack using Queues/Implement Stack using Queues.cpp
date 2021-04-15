class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {}
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
        topel = x;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while (q1.size() > 1) {
            topel = q1.front();
            q1.pop();
            q2.push(topel);
        }
        int temp1 = q1.front();
        q1.pop();
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
        return temp1;
    }
    
    /** Get the top element. */
    int top() {
        return topel;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.size() == 0;
    }
    
    queue<int> q1;
    queue<int> q2;
    int topel;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
