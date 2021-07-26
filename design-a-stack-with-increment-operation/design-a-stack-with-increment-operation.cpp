class CustomStack {
public:
    vector<int> s, arr;
    int mS;
    CustomStack(int maxSize) {
        mS=maxSize;
    }
    
    void push(int x) {
        if(s.size()==mS) return;
        s.push_back(x);
        arr.push_back(0);
    }
    
    int pop() {
        int i=s.size()-1;
        if(i<0) return -1;
        if(i>0) arr[i-1]+=arr[i];
        int res=s[i]+arr[i];
        s.pop_back();
        arr.pop_back();
        
        return res;
    }
    
    void increment(int k, int val) {
        int i=min(k,(int)s.size())-1;
        if(i>=0) arr[i]+=val;
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */