class Solution {
    public int lengthOfLastWord(String s) {
        int length = 0;
        int i = s.length() - 1;

        while(i >= 0) {
            if(s.charAt(i) == ' ' && length == 0) {
                i--;
                continue;
            } else if(s.charAt(i) == ' ') return length;
            else length++;

            i--;
        }

        return length;
    }
}