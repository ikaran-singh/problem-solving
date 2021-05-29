class StockSpanner {
public:
    StockSpanner() {
        
    }
    
    stack<pair<int, int>> s;
    int next(int price) {
        int ct=1;
        while (!s.empty() && s.top().first <= price) {
            ct+=s.top().second;
            s.pop();
        }
        s.push({price, ct});
        return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */