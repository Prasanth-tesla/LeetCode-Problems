class Solution {
    public int dfs(int[][] grid, int r, int c) {
        if(r < 0 || c < 0 || r >= grid.length || c >= grid[0].length || grid[r][c] == 0)
            return 1;
        
        if(grid[r][c] == 2) return 0;

        grid[r][c] = 2;

        return dfs(grid, r + 1, c) +
               dfs(grid, r, c + 1) +
               dfs(grid, r - 1, c) +
               dfs(grid, r, c - 1);

    }
    public int islandPerimeter(int[][] grid) {
        int per = 0;
        for(int i = 0; i < grid.length; i++) {
            for(int j = 0; j < grid[0].length; j++) {
                if(grid[i][j] == 1)
                    per = dfs(grid, i, j);
            }
        }
        return per;
    }
}