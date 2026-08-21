int sumOfMultiples(int n) {
    bool *res = malloc(n * sizeof(bool));
    int sum = 0;

    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
            res[i - 1] = true;
        else res[i - 1] = false;
    }

    for(int i = 0; i < n; i++) {
        if(res[i]) sum += i + 1;
    }

    return sum;
}