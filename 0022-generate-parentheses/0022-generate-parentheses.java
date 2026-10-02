class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> combs = new ArrayList<>();
        backTrack(combs, "", 0, 0, n);
        return combs;
    }

    public void backTrack(List<String> combs, String curr, int open, int close, int max) {
        if(curr.length() == max * 2) {
            combs.add(curr);
            return;
        }

        if(open < max) backTrack(combs, curr + "(", open + 1, close, max);

        if(close < open) backTrack(combs, curr + ")", open, close + 1, max);
    }
}