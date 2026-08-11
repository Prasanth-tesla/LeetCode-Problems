class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.length();
        int i = size - 1, length = 0;

        while(i >= 0) {
            if(s[i] == ' ' && length == 0) {
                i--;
                continue;
            } else if(s[i] == ' ') return length;
            else length++;
            i--;
        }

        return length;
    }
};