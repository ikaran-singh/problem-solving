class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp;
        
        for(auto i:arr) mp[i]++;
        
        unordered_set<int> st;
        for(auto m:mp){
            if(st.find(m.second)==st.end())
                st.insert(m.second);
            else
                return false;
        }
        return true;
    }
};