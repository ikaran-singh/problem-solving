class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> v;
        int n=nums.size();
        int a[n+1];
        for(int i=1;i<=n;i++)
            a[i]=-1;
        
        for(int i=0;i<n;i++){
            if(a[nums[i]]==-1){
                a[nums[i]]++;
            }
            else
                v.push_back(nums[i]);
        }
        return v;
    }
};