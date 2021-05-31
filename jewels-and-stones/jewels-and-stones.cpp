class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        int ans=0;
        unordered_set<char> s(jewels.begin(), jewels.end());
        for(char i:stones){
            if(s.count(i))
                ans++;
        }
        return ans;
    }
};