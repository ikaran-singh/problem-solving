class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> v;
        unordered_map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(int i=0;i<nums.size();i++) mp[nums[i]]++;
        
        for(auto i=mp.begin();i!=mp.end();i++){
            pq.push({i->second,i->first});
            if(pq.size()>k)
                pq.pop();
        }
        
        while(pq.size()>0){
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};