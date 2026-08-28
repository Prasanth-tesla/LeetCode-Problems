int countPrimes(int n) {
    if(n <= 2) return 0;
    bool* ide = calloc(n, sizeof(bool));
    ide[0] = ide[1] = true;

    int p = 2, count = 1;

    while(p * p < n) {
        if(!ide[p]) {
            for(int i = p * p; i < n; i += p) {
                ide[i] = true;
            }
        }
        p++;
    }

    for(int i = 3; i < n; i += 2) {
        if(!ide[i]) count++;
    }

    free(ide);

    return count;
}