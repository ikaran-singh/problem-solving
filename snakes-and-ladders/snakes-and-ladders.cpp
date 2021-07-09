class Solution {
public:
    
    void findCord(int curr, int n, vector<int> &v) {
        
        int r=n-1-(curr-1)/n;

        int c=(curr-1)%n;
        if(r%2==0 && n%2==0 || (n%2 == 1 && r%2 == 1) )
            c=n-1-c;
        v.push_back(r);
        v.push_back(c);
    }
    
    int snakesAndLadders(vector<vector<int>>& board) {
        
        int n=board.size();
        int moves=0;
        queue<int> q;
        vector<vector<bool>> vis(n, vector<bool> (n, false));
        
        q.push(1);
        vis[n-1][0]=true;
        
        while(!q.empty()){
            
            int size=q.size();
            
            for(int i=0;i<size;i++){
                int x=q.front();
                
                if(x==n*n) return moves;
                q.pop();
                for(int j=1;j<=6;j++){
                    if(j+x>n*n) break;
                    vector<int> v;
                    findCord(j+x,n,v);
                    int r=v[0];
                    int c=v[1];
                    if(vis[r][c]==true) continue;
                    vis[r][c]=true;
                    if(board[r][c]==-1)
                        q.push(j+x);
                    else
                        q.push(board[r][c]);
                 }
            }
            moves++;
        }
        return -1;
    }
};