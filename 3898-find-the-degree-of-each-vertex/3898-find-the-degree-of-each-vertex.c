/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int *degrees = malloc(matrixSize * sizeof(int)), idx = 0;

    for(int i = 0; i < matrixSize; i++) {
        int deg = 0;
        for(int j = 0; j < *matrixColSize; j++)
            deg += matrix[i][j];
        degrees[idx++] = deg;
    }

    *returnSize = idx;
    return degrees;
}