class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        int i=0;
        vector<string> v;
        for(int j=1;j<=n;j++){
            if(i==target.size()) break;
            if(target[i]==j){
                v.push_back("Push");
                i++;
            }
            else{
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        return v;
    }
};