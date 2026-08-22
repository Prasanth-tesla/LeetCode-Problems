bool checkDivisibility(int n) {
    int digSum = 0, digProd = 1, num = n;
    while(num) {
        digSum += num % 10;
        digProd *= num % 10;
        num /= 10;
    }
    return n % (digSum + digProd) == 0;
}