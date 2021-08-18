class Solution {
public:
    void solve(vector<int> s, int l, int r, vector<vector<int>> &v){
        if(l==r){
            v.push_back(s);
        }
        
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            solve(s,l+1,r,v);
        }
    }    
    
    vector<vector<int>> permute(vector<int>& nums) {
        int l=0, r=nums.size()-1;
        vector<vector<int>> v;
        solve(nums,l,r,v);
        return v;
    }
};