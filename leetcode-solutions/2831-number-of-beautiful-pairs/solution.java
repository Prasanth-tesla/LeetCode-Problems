class Solution {
    public int countBeautifulPairs(int[] nums) {
        int n = nums.length;
        int count = 0;

        for(int i = 0;i < n;i++) {
            int first = nums[i];
            while(first >= 10)
                first /= 10;
            for(int j = i + 1;j < n;j++) {
                int last = nums[j] % 10;
                if(gcd(first, last) == 1) {
                    count++;
                }
            }
        }
        return count;
    }
    private int gcd(int a, int b) {
        while(b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
}
