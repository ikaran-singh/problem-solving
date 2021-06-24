class Solution {
public:
    
    int firstOcc(vector<int> arr, int x){
        int start=0, end=arr.size()-1;
        int res=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==x){
                end=mid-1;
                res=mid;
            }
            else if(arr[mid]<x)
                start=mid+1;
            else if(arr[mid]>x)
                end=mid-1;
        }
        return res;
    }
    
    int lastOcc(vector<int> arr, int x){
        int start1=0, end1=arr.size()-1;
        int res1=-1;
        while(start1<=end1){
            int mid=start1+(end1-start1)/2;
            if(arr[mid]==x){
                start1=mid+1;
                res1=mid;
            }
            else if(arr[mid]<x)
                start1=mid+1;
            else if(arr[mid]>x)
                end1=mid-1;
        }
        return res1;
    }
    
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> v;
        v.push_back(firstOcc(nums,target));
        v.push_back(lastOcc(nums,target));
        
        return v;
    }
};