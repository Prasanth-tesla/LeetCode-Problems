class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x ^ y, count = 0;;
        for(int i = 0; i < 32; i++) {
            if(n & 1) count++;
            n >>= 1;
        }
        return count;
    }
};