class Solution {
public:
    string removeDuplicates(string s) {
        
        string res;
        
        for(char i:s){
            if(res.size()==0) res.push_back(i);
            else if(res.back()==i) res.pop_back();
            else res.push_back(i);
        }
        
        return res;
    }
};