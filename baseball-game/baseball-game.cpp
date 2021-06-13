class Solution {
public:
    
    
    int calPoints(vector<string>& ops) {
    
        stack<int> s;
        
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                int val1=s.top();
                s.pop();
                int val2=s.top();
                s.push(val1);
                s.push(val1+val2);
            }
            else if(ops[i]=="D"){
                s.push(s.top()*2);
            }
            else if(ops[i]=="C"){
                s.pop();
            }
            else
                s.push(stoi(ops[i]));
        }
        int sum=0;
        while(s.size()>0){
            sum+=s.top();
            s.pop();
        }
        
        return sum;
    }
};