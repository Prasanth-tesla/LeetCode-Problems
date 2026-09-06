class Solution {
    public int findMaxFish(int[][] grid) {
        int row = grid.length;
        int col = grid[0].length, maxFish = 0;

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] != 0) {
                    int fish = dfs(grid, i , j);
                    maxFish = (maxFish < fish) ? fish : maxFish;
                }
            }
        }

        return maxFish;
    }

    public int dfs(int[][] grid, int r, int c) {
        if(r < 0 || r >= grid.length || c < 0 || c >= grid[0].length || grid[r][c] == 0)
            return 0;

        int temp = grid[r][c];
        grid[r][c] = 0;

        return temp + dfs(grid, r - 1, c) +
                      dfs(grid, r + 1, c) +
                      dfs(grid, r, c - 1) +
                      dfs(grid, r, c + 1);
    }
}