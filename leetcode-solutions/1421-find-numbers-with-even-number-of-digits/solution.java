class Solution {
    public int findNumbers(int[] nums) {
        int count = 0;
        for(int num : nums) {
            int co = 0;
            while(num > 0) {
                num /= 10;
                co++;
            }
            if(co % 2 == 0)
                count++;
        }
        return count;
    }
}
