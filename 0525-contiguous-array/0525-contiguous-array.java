class Solution {
    public int findMaxLength(int[] nums) {
        Map<Integer, Integer> map = new HashMap<>();
        int maxLen = 0, sum = 0;
        map.put(sum, -1);
        
        for(int i = 0; i < nums.length; i++) {
            nums[i] = nums[i] == 0 ? -1 : 1;
            sum += nums[i];

            if(map.containsKey(sum))
                maxLen = (maxLen < i - map.get(sum)) ? i - map.get(sum) : maxLen;
            
            else map.put(sum, i);
        }
        
        return maxLen;
    }
}