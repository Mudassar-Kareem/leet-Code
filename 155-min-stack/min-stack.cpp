class MinStack {
public:
    stack<int> main,min;
    MinStack() {
        
    }
    
    void push(int val) {
        if(min.empty() || min.top() >= val){
            min.push(val);
        }
        main.push(val);
    }
    
    void pop() {
        if(main.top() == min.top()){
            min.pop();
        }
        main.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return min.top();
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