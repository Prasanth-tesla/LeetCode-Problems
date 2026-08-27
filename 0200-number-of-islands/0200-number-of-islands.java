class Solution {
    public int numIslands(char[][] grid) {
        int r = grid.length;
        int c = grid[0].length;
        int island = 0;

        for(int i = 0; i < r; i++) {
            for(int j = 0;j < c; j++) {
                if(grid[i][j] == '1') {
                    island++;
                    dfs(i, j, r, c, grid);
                }
            }
        }

        return island;
    }

    public void dfs(int i, int j, int r, int c, char[][] grid) {
        if(i < 0 || j < 0 || i >= r || j >= c || grid[i][j] != '1') return;

        grid[i][j] = '0';
        
        dfs(i - 1, j, r, c, grid);
        dfs(i + 1, j, r, c, grid);
        dfs(i, j - 1, r, c, grid);
        dfs(i, j + 1, r, c, grid);

    }
}