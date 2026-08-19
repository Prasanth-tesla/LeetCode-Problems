/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    *returnSize = 2;
    double *res = malloc(2 * sizeof(double));

    res[0] = celsius + 273.15000;
    res[1] = celsius * 1.80000 + 32.00000;

    return res;
}