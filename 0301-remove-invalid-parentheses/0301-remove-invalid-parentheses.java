class Solution {
    private Set<String> res = new HashSet<>();

    public List<String> removeInvalidParentheses(String s) {
        int leRem = 0, riRem = 0;

        for(char c : s.toCharArray()) {
            if(c == '(') leRem++;
            else if(c == ')') {
                if(leRem > 0) leRem--;
                else riRem++;
            }
        }

        backTrack(s, 0, 0, leRem, riRem, new StringBuilder());

        return new ArrayList<>(res);
    }

    private void backTrack(String s, int idx, int bal, int leRem, int riRem, StringBuilder curr) {
        if(idx == s.length()) {
            if(bal == 0 && leRem == 0 && riRem == 0) {
                res.add(curr.toString());
            }
            return;
        }

        char c = s.charAt(idx);

        if(c == '(' && leRem > 0) backTrack(s, idx + 1, bal, leRem - 1, riRem, curr);

        if(c == ')' && riRem > 0) backTrack(s, idx + 1, bal, leRem, riRem - 1, curr);

        curr.append(c);

        if(c != '(' && c != ')') backTrack(s, idx + 1, bal, leRem, riRem, curr);

        else if(c == '(') backTrack(s, idx + 1, bal + 1, leRem, riRem, curr);

        else if(bal > 0) backTrack(s, idx + 1, bal - 1, leRem, riRem, curr);

        curr.deleteCharAt(curr.length() - 1);
    }
}