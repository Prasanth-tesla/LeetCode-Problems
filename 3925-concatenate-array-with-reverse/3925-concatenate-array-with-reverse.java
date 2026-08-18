class Solution {
    public int[] concatWithReverse(int[] nums) {
        int size = nums.length;
        int res[] = new int[2 * size];

        for(int i = 0; i < size; i++) 
            res[i] = res[2 * size - i - 1] = nums[i];

        return res;
    }
}