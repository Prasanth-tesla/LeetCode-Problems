class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int colSize = matrix[0].length;
        int low = 0, high = matrix.length * colSize - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / colSize, col = mid % colSize;

            if(matrix[row][col] == target) return true;
            if(matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;
        }

        return false;
    }
}