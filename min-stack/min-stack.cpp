class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> ms,as;

    MinStack() {
        
    }
    
    void push(int x) {
        
        if(ms.empty()){
            ms.push(x);
            as.push(x);
        }
        else{
            ms.push(x);
            if(as.top()>=ms.top())
                as.push(x);
        }
    }
    
    void pop() {
        
        if(ms.empty()) return;
        if(ms.top()==as.top())
            as.pop();
        ms.pop();        
    }
    
    int top() {
        
        return ms.top();
        
    }
    
    int getMin() {
        
        if(ms.empty()) return 0;
        return as.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */