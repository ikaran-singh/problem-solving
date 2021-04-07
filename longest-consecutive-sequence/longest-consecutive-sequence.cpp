class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> s;
        for(int i:nums)
            s.insert(i);
        
        int res=0;
        
        for(int i:nums){
            if(!s.count(i-1)){
                int cNum=i;
                int curr=1;
                
                while(s.count(cNum+1)){
                    cNum++;
                    curr++;
                }
                
                res=max(res,curr);
            }
        }
        
        return res;        
    }
};