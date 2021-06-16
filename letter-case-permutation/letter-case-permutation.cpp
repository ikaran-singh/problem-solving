class Solution {
public:
    
    void solve(string ip, string op, vector<string>& v){
        
        if(ip.size()==0){
            v.push_back(op);
            return;
        }
        
        if(isalpha(ip[0])){
            string op1=op;
            string op2=op;
            op1.push_back(tolower(ip[0]));
            op2.push_back(toupper(ip[0]));
            ip.erase(ip.begin()+0);
        
            solve(ip,op1,v);
            solve(ip,op2,v);
        }
        else{
            string op1=op;
            op1.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            solve(ip,op1,v);
        }
        
    }
    
    vector<string> letterCasePermutation(string s) {
        
        vector<string> v;
        vector<string> res;
        
        string op="";
        solve(s,op,v);
        
        set<string> st;
        
        for(auto i:v){
            if(st.find(i)==st.end()){
                res.push_back(i);
                st.insert(i);
            }      
        }
        return res;
    }
};