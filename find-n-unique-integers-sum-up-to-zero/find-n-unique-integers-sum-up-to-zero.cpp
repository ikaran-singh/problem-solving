class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> v;
        
        for(int i=0;i<n;i++){
            v.push_back(i*2-n+1);
        }
        
        return v;
    }
};