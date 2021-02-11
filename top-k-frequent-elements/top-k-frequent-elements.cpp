class Solution {
public:
    
    struct myCmp{
        bool operator()(pair<int,int> p1, pair<int,int> p2){
            if(p1.second==p2.second)
                return p1.first>p2.first;
            return p1.second<p2.second;
        }
    };
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        vector<int> v;
        unordered_map<int, int> m;
        int n=nums.size();
        for(int i=0;i<n;i++) m[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,myCmp> pq(m.begin(),m.end());
        
        for(int i=0;i<k;i++){
            v.push_back(pq.top().first);
            pq.pop();
        }
        
        return v;
    }
};