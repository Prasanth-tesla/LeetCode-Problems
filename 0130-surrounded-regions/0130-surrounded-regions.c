void dfs(char** board, int r, int c, int rows, int cols) {
    if (r < 0 || r >= rows || c < 0 || c >= cols || board[r][c] != 'O')
        return;

    board[r][c] = '#';

    dfs(board, r - 1, c, rows, cols);
    dfs(board, r + 1, c, rows, cols);
    dfs(board, r, c - 1, rows, cols);
    dfs(board, r, c + 1, rows, cols);
}

void solve(char** board, int boardSize, int* boardColSize) {
    int rows = boardSize;
    int cols = *boardColSize;

    for (int i = 0; i < rows; i++) {
        dfs(board, i, 0, rows, cols);
        dfs(board, i, cols - 1, rows, cols);
    }

    for (int j = 0; j < cols; j++) {
        dfs(board, 0, j, rows, cols);
        dfs(board, rows - 1, j, rows, cols);
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] == 'O')
                board[i][j] = 'X';
            else if (board[i][j] == '#')
                board[i][j] = 'O';
        }
    }
}
