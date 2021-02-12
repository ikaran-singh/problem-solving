class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int res=0;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        
        for(auto &x:m)
            if(x.second==1)
                res=x.first;
        return res;
    }
};