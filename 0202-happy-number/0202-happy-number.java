class Solution {
    public boolean isHappy(int n) {
        while(n != 1 && n != 4) {
            int num = 0;
            while(n != 0) {
                num += (n % 10) * (n % 10);
                n /= 10;
            }
            n = num;
        }
        return n == 1;
    }
}