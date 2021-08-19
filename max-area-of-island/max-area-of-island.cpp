class Solution {
public:
    
    int dfs(vector<vector<int>>& grid, vector<vector<bool>> &visited, int i, int j, int m, int n){
        visited[i][j]=true;
        
        int count=1;
        
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        
        for(int k=0;k<4;k++){
            int nx=i+dx[k];
            int ny=j+dy[k];
            
            if(nx>=0 && nx<m && ny>=0 && ny<n && !visited[nx][ny] && grid[nx][ny]==1){
                int sc=dfs(grid,visited,nx,ny,m,n);
                count+=sc;
            }
        }
        
        return count;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        
        int mA=0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]==1){
                    int ans=dfs(grid,visited,i,j,m,n);
                    if(ans>mA)
                        mA=ans;
                }
            }
        }
        
        return mA;
    }
};