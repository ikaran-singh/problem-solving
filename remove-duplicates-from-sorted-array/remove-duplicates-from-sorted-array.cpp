class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> s;
        int n=nums.size();
        for(int i=0;i<n;i++)
            s.insert(nums[i]);
        
        int k=0;
        for(auto it=s.begin();it!=s.end();it++)
            nums[k++]=*it;
        
        return s.size();
        
    }
};