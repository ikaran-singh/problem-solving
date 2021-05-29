class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> res;
        
        int mx=INT_MIN;
        for(int i=0;i<candies.size();i++){
            mx=max(mx,candies[i]);
        }
        
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=mx)
                res.push_back(true);
            else
                res.push_back(false);
        }
        
        return res;
    }
};