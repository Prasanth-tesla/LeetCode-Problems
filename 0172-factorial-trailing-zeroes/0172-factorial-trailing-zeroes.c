int trailingZeroes(int n) {
    int zeros = 0, fiveFac = 5;
    while(n >= fiveFac) {
        zeros += n / fiveFac;
        fiveFac *= 5;
    }
    return zeros;
}