class Solution {
public:
    
    int calculate(vector<int> arr, int n){
        
        int lis[n];
        lis[0]=1;
        for(int i=1;i<n;i++){
            lis[i]=1;
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i])
                    lis[i]=max(lis[i],lis[j]+1);
            }
        }
        int res=0;
        for(int i=0;i<n;i++)
            res=max(res,lis[i]);
        return res;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        
        int n=nums.size();
        
        return calculate(nums,n);
        
    }
};