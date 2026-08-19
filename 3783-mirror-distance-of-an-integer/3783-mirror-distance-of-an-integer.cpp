class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0, num = n;

        while(num != 0) {
            rev *= 10;
            rev += num % 10;
            num /= 10;
        }

        return n > rev ? n - rev : rev - n;
    }
};