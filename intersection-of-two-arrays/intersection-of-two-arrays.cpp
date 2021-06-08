class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int n=nums1.size();
        int m=nums2.size();
        vector<int> v;
        unordered_set<int> s;
        
        for(int i=0;i<m;i++) s.insert(nums2[i]);
        
        for(int i=0;i<n;i++){
            if(s.find(nums1[i])!=s.end()){
                v.push_back(nums1[i]);
                s.erase(nums1[i]);
            } 
        }
        
        return v;
    }
};