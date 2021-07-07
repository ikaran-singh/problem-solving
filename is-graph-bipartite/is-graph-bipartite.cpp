class Solution {
public:
    int vis[101], col[101];
    
    bool dfs(int v, int c, vector<vector<int>> &graph) {
        
        if (col[v]!=0) {
            return col[v]==c;
        }       
        col[v]=c;       
        for(int next : graph[v]) {
            if (!dfs(next, -c, graph)) {
                return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n=graph.size();
        
        for(int i=0;i<n;i++){
            if(col[i]==0 && !dfs(i,1,graph))
                return false;
        }
        return true;
    }
};