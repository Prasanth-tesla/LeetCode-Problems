int countDigits(int num) {
    int nums = 0, n = num;
    while(n) {
        if(num % (n % 10) == 0) nums++;
        n /= 10;
    }
    return nums;
}