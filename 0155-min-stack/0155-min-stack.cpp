class MinStack {
    stack<int> stack1;
    stack<int> minstack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        stack1.push(val);
        if(minstack.empty() || val<=minstack.top()){
            minstack.push(val);
        }
    }
    
    void pop() {
        int poppedvalue=stack1.top();
        stack1.pop();
        if(poppedvalue==minstack.top()){
            minstack.pop();
        }
    }
    
    int top() {
        return stack1.top();
    }
    
    int getMin() {
        return minstack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */