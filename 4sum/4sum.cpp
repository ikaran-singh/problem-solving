class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target2=target-nums[i]-nums[j];
                int front=j+1;
                int back=n-1;
                
                while(front<back){
                    int twoSum=nums[front]+nums[back];
                    if(twoSum<target2) front++;
                    else if(twoSum>target2) back--;
                    else{
                        vector<int> ans(4,0);
                        ans[0]=nums[i];
                        ans[1]=nums[j];
                        ans[2]=nums[front];
                        ans[3]=nums[back];
                        res.push_back(ans);
                        
                        while(front<back && nums[front]==ans[2]) ++front;
                        while(front<back && nums[back]==ans[3]) --back;
                    }
                }
                
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
            
            while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        
        return res;
    }
};