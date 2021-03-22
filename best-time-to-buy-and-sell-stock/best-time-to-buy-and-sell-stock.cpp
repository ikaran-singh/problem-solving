class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int profit=0;
        int minP=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minP=min(minP,prices[i]);
            profit=max(profit,prices[i]-minP);
        }
        
        return profit;
    }
};