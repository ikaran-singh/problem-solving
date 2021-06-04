class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        int left=0, right=n-1;
        
        while(left+1<n && arr[left]<arr[left+1]) left++;
        while(right>0 && arr[right]<arr[right-1]) right--;
        
        return left==right && left>0 && right<n-1;
    }
};