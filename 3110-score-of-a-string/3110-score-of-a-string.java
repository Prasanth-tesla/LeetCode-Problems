class Solution {
    public int scoreOfString(String s) {
        int left = 0, score = 0, size = s.length();

        for(int right = 1; right < size; right++) {
            int lVal = s.charAt(left), rVal = s.charAt(right);
            score += lVal > rVal ? lVal - rVal : rVal - lVal;
            left++;
        }

        return score;
    }
} 