class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        vector<int> v;
        stack<pair<int,int>> s;
        
        int n=temperatures.size();
        
        for(int i=n-1;i>=0;i--){
            if(s.size()==0) v.push_back(-1);
            else if(s.size()>0 && s.top().first>temperatures[i])
                v.push_back(s.top().second);
            else if(s.size()>0 && s.top().first<=temperatures[i]){
                while(s.size()>0 && s.top().first<=temperatures[i]) {s.pop();}
                if(s.size()==0) v.push_back(-1);
                else v.push_back(s.top().second);
            }
            s.push({temperatures[i],i});
        }
        
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==-1) v[i]=0;
            else v[i]=v[i]-i;
        }
        
        return v;        
    }
};