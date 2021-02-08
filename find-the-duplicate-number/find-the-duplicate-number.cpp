class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int n=nums.size(),res=0;
        int a[n];
        for(int i=0;i<n;i++)
            a[i]=-1;
        
        for(int i=0;i<n;i++){
            if(a[nums[i]]==-1){
                a[nums[i]]++;
            }
            else
                res=nums[i];
        }
        return res;
    }
};