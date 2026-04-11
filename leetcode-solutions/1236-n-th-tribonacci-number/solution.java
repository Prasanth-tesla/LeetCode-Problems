class Solution {
    public int tribonacci(int n) {
        int prev = 0, mid = 1, next = 1;
        if(n == 0)
            return prev;
        if(n < 3)
            return 1;
        for(int i = 3;i < n + 1;i++) {
            int curr = prev + mid + next;
            prev = mid;
            mid = next;
            next = curr;
        }
        return next;
    }
}
