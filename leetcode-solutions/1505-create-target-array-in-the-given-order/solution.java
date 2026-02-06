import java.util.*;

class Solution {
    public int[] createTargetArray(int[] nums, int[] index) {
        List <Integer> result = new ArrayList <>();
        for(int i = 0;i < nums.length;i++) {
            result.add(index[i], nums[i]);
        }
        int[] target = new int[result.size()];

        for(int i = 0;i < result.size(); i++) {
            target[i] = result.get(i);
        }
        return target;
    }
}
