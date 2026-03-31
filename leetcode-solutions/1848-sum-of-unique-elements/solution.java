class Solution {
    public int sumOfUnique(int[] nums) {
        HashMap <Integer, Integer> freq = new HashMap <> ();
        int sum = 0;
        for(int i : nums)
            freq.put(i, freq.getOrDefault(i,0) + 1);
        for(int key : freq.keySet()) {
            if(freq.get(key) == 1)
                sum += key;
        }
        return sum;
    }
}
