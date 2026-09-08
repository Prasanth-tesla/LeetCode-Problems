public class Solution {
    public int CountCommas(int n) {
        return n >= 1000 ? n - 999 : 0;
    }
}