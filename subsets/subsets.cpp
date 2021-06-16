class Solution {
public:
    
    void solve(vector<int> nums, vector<int> op, vector<vector<int>> &v){
        
        if(nums.size()==0){
            v.push_back(op);
            return;
        }
        
        vector<int> op1(op.begin(), op.end());
        vector<int> op2(op.begin(), op.end());
        
        op2.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        
        solve(nums,op1,v);
        solve(nums,op2,v);
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> v;
        vector<int> op;
        solve(nums,op,v);
        return v;
        
    }
};