class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        
        vector<int> v;
        
        for(auto rect:rectangles)
            v.push_back(min(rect[0],rect[1]));
        
        int mx=INT_MIN;
        for(int i=0;i<v.size();i++)
            mx=max(mx,v[i]);
        
        int ct=0;
        for(int i=0;i<v.size();i++)
            if(mx==v[i]) ct++;
        
        return ct;
    }
};