/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int* rect = malloc(2 * sizeof(int));
    
    for(int i = 1; i * i <= area; i++) {
        if(area % i == 0) {
            rect[0] = area / i;
            rect[1] = i;
        }
    }

    *returnSize = 2;
    return rect;
}