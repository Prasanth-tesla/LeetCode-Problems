int dfs(int** grid, int r, int c, int rows, int cols) {
    if(r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == 0)
        return 1;

    if(grid[r][c] == 2) return 0;

    grid[r][c] = 2;

    return dfs(grid, r, c + 1, rows, cols) +
           dfs(grid, r, c - 1, rows, cols) +
           dfs(grid, r + 1, c, rows, cols) +
           dfs(grid, r - 1, c, rows, cols);
}

int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int per = 0;
    
    for(int i = 0; i < gridSize; i++) {
        for(int j = 0; j < *gridColSize; j++) {
            if(grid[i][j] == 1)
                per = dfs(grid, i, j, gridSize, *gridColSize);
        }
    }

    return per;
}