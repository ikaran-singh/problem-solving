class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n=arr.size();
        
        int mx=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                mx=arr[i];
                arr[i]=-1;
            }
            else{
                int t=arr[i];
                arr[i]=mx;
                mx=max(t,mx);
            }
        }
        return arr;
    }
};