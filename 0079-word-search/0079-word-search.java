class Solution {
    public boolean exist(char[][] board, String word) {
        for(int i = 0; i < board.length; i++) {
            for(int j = 0; j < board[0].length; j++) {
                if(board[i][j] == word.charAt(0)) {
                    if(dfs(board, word, 0, i, j, board.length, board[0].length))
                        return true;
                }
            }
        }
        return false;
    }

    public boolean dfs(char[][] board, String word, int i, int r, int c, int rows, int cols) {
        if(r < 0 || r >= rows || c < 0 || c >= cols || board[r][c] != word.charAt(i))
            return false;

        if(i == word.length() - 1)
            return true;

        char temp = board[r][c];
        board[r][c] = '/';

        boolean found = dfs(board, word, i + 1, r + 1, c, rows, cols) ||
                        dfs(board, word, i + 1, r - 1, c, rows, cols) ||
                        dfs(board, word, i + 1, r, c + 1, rows, cols) ||
                        dfs(board, word, i + 1, r, c - 1, rows, cols);

        board[r][c] = temp;

        return found;
    }
}