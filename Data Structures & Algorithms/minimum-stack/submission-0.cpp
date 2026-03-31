class MinStack {
public:
    stack<int> st;
    stack<int> stAux;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        val = min(val, stAux.empty() ? val : stAux.top());
        stAux.push(val);
    }
    
    void pop() {
        st.pop();
        stAux.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stAux.top();
    }
};
