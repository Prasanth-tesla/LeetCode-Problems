class Solution {
public:
    int minInsertions(string s) {
        int need = 0, ins = 0;

        for(char c : s) {
            if(c == '(') {
                if(need % 2 == 1) {
                    ins++;
                    need--;
                }
                need += 2;
            } else {
                need--;
                if(need < 0) {
                    ins++;
                    need = 1;
                }
            }
        }

        return ins + need;
    }
};