bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int low = 0, high = matrixSize * *matrixColSize - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        int row = mid / *matrixColSize, col = mid % *matrixColSize;

        if(matrix[row][col] == target) return true;
        if(matrix[row][col] < target) low = mid + 1;
        else high = mid - 1;
    }

    return false;
}