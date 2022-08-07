class Solution {
public:
    void dfs(int start, vector<vector<int>> &grid, int end) {
        if(start < 0 || end < 0 || start == grid.size() || end == grid[0].size()) return;
        
        if(grid[start][end] == 1) return;
        
        grid[start][end] = 1;
        
        dfs(start+1, grid, end);
        dfs(start-1, grid, end);
        
        dfs(start, grid, end+1);
        dfs(start, grid, end-1);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int ans = 0, r = grid.size();
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 0 && i == 0 || j == 0 || i == r-1 || j == grid[i].size() - 1){
                    dfs(i, grid, j);
                }
            }
        }
        
        for(int i = 0; i < r; i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 0){
                    dfs(i, grid, j);
                    ++ans;
                }
            }
        }
        
        return ans;
    }
};