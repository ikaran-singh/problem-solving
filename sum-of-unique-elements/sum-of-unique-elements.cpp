class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        
        int sum=0;        
        
        for(auto x:nums)
            mp[x]++;
        
        for(auto m:mp){
            if(m.second==1)
                sum+=m.first;
        }
        
        return sum;
    }
};