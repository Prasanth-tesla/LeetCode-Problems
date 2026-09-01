class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> map = new HashMap<>();
        int maxLen = 0, len = s.length(), left = 0;

        for(int right = 0; right < len; right++) {
            char ch = s.charAt(right);

            if(map.containsKey(ch))
                left = Math.max(left, map.get(ch) + 1);

            map.put(ch, right);
            maxLen = Math.max(maxLen, right - left + 1);
        }

        return maxLen;
    }
}