class Solution {
    public int numEnclaves(int[][] grid) {
        int rows = grid.length;
        int cols = grid[0].length;

        for(int i = 0; i < rows; i++) {
            if(grid[i][0] == 1)
                dfs(grid, i, 0, rows, cols);
            if(grid[i][cols - 1] == 1)
                dfs(grid, i, cols - 1, rows, cols);
        }
        
        for(int j = 0; j < cols; j++) {
            if(grid[0][j] == 1)
                dfs(grid, 0, j, rows, cols);
            if(grid[rows - 1][j] == 1)
                dfs(grid, rows - 1, j, rows, cols);
        }

        int enclaves = 0;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(grid[i][j] == 1) {
                    enclaves++;
                }
            }
        }

        return enclaves;
    }

    public void dfs(int[][] grid, int r, int c, int rows, int cols) {
        if(r < 0 || c < 0 || r >= rows || c >= cols)
            return;
        
        if(grid[r][c] == 0)
            return;

        grid[r][c] = 0;

        dfs(grid, r - 1, c, rows, cols);
        dfs(grid, r + 1, c, rows, cols);
        dfs(grid, r, c - 1, rows, cols);
        dfs(grid, r, c + 1, rows, cols);
    }
}