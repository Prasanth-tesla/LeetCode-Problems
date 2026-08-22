bool digitCount(char* num) {
    int* res = calloc(10, sizeof(int));

    for(int i = 0; num[i] != '\0'; i++)
        res[num[i] - '0']++;

    for(int i = 0; num[i] != '\0'; i++) {
        if(res[i] != num[i] - '0') return false;
    }
    
    return true;
}