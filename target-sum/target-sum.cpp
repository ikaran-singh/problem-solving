class Solution {
public:
    
    int subsetSum(vector<int> arr, int sum){
        
        int n=arr.size();
        int t[n+1][sum+1];
        
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0) t[i][j]=0;
                if(j==0) t[i][j]=1;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                
                if(arr[i-1]<=j)
                    t[i][j]=t[i-1][j-arr[i-1]] + t[i-1][j];
                else
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int sum=0;
        for(int i=0;i<nums.size();i++) sum+=nums[i];
        
        if((sum+target)%2 || sum<target || target<-sum) return 0;
        
        int s1=(target+sum)/2;
        
        return subsetSum(nums, s1);
        
    }
};