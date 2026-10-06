class Solution {
    public int minAddToMakeValid(String s) {
        int bal,add;
        bal = add = 0;

        for(char c : s.toCharArray()) {
            if(c == '(') bal++;
            else if(bal > 0) bal--;
            else add++;
        }

        return add + bal;
    }
}