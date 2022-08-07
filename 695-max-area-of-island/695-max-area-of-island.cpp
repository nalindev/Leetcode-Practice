class Solution {
public:
    int dfs(int start, vector<vector<int>> &grid, int end){
        if(start < 0 || end < 0 || start >= grid.size() || end >= grid[0].size()) return 0;
        
        if(grid[start][end] == 0) return 0;
        
        grid[start][end] = 0;
        
        return 1 + dfs(start+1, grid, end) + dfs(start-1, grid, end) + dfs(start, grid, end + 1) + dfs(start, grid, end-1);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j]){
                    ans = max(ans, dfs(i, grid, j));
                }
            }
        }
        
        return ans;
    }
};