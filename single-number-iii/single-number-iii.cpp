class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        vector<int> res;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        for(auto &x:m)
            if(x.second==1)
                res.push_back(x.first);
        return res;
        
    }
};