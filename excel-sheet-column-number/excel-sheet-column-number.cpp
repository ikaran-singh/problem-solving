class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int res=0;
        for(int i=columnTitle.length();i>0;i--) {
            res+=(columnTitle[i-1]-'A'+1)*pow(26,(columnTitle.length()-i));
        }
        return res;       
    }
};