/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **res = malloc(n * sizeof(char *));
    *returnSize = 0;
    int idx = 0;

    for(int i = 1 ; i <= n ; i++) {
        if(i % 3 == 0 && i % 5 == 0) {
            res[idx] = malloc(9 * sizeof(char));
            strcpy(res[idx++], "FizzBuzz");
        } else if(i % 3 == 0) {
            res[idx] = malloc(5 * sizeof(char));
            strcpy(res[idx++], "Fizz");
        } else if(i % 5 == 0) {
            res[idx] = malloc(5 * sizeof(char));
            strcpy(res[idx++], "Buzz");
        } else {
            res[idx] = malloc(12 * sizeof(char));
            snprintf(res[idx++], 12, "%d", i);
        }
    }
    *returnSize = idx;
    return res;
}