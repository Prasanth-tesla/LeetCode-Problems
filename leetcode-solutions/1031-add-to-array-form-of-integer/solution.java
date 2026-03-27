class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        List<Integer> res = new ArrayList<>();
        
        int l = num.length - 1;
        while(l >= 0 || k > 0) {
            if(l >= 0) {
                k += num[l];
                l--;
            }
            res.add(k % 10);
            k /= 10;
        }
        Collections.reverse(res);
        return res;
    }
}
