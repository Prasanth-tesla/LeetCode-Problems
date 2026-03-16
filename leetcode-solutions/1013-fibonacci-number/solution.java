class Solution {
    public int fib(int n) {
        int prev = 0, next = 1;
        for(int i = 0;i < n;i++) {
            next = next + prev;
            prev = next - prev;
        }
        return prev;
    }
}
