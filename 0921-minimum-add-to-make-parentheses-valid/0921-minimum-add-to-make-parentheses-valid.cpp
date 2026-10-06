class Solution {
public:
    int minAddToMakeValid(string s) {
        int bal = 0, add = 0;

        for(char c : s) {
            if(c == '(') bal++;
            else if(bal > 0) bal--;
            else add++;
        }

        return bal + add;
    }
};