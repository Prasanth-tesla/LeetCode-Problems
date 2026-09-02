void dfs(int** grid, int r, int c, int gridSize, int gridColSize) {
    if(r < 0 || c < 0 || r >= gridSize || c >= gridColSize || grid[r][c] == 0)
        return;

    grid[r][c] = 0;

    dfs(grid, r - 1, c, gridSize, gridColSize);
    dfs(grid, r + 1, c, gridSize, gridColSize);
    dfs(grid, r, c - 1, gridSize, gridColSize);
    dfs(grid, r, c + 1, gridSize, gridColSize);
}

int numEnclaves(int** grid, int gridSize, int* gridColSize) {
    for(int i = 0; i < gridSize; i++) {
        if(grid[i][0] == 1)
            dfs(grid, i, 0, gridSize, *gridColSize);
        if(grid[i][*gridColSize - 1] == 1)
            dfs(grid, i, *gridColSize - 1, gridSize, *gridColSize);
    }

    for(int j = 0; j < *gridColSize; j++) {
        if(grid[0][j] == 1)
            dfs(grid, 0, j, gridSize, *gridColSize);
        if(grid[gridSize - 1][j] == 1)
            dfs(grid, gridSize - 1, j, gridSize, *gridColSize);
    }

    int enclaves = 0;
    for(int i = 0; i < gridSize; i++) {
        for(int j = 0; j < *gridColSize; j++) {
            if(grid[i][j] == 1) enclaves++;
        }
    }

    return enclaves;
}