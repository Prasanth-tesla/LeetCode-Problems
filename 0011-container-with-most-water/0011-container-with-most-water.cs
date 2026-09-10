public class Solution {
    public int MaxArea(int[] height) {
        int left = 0, right = height.Length - 1, area = 0;

        while(left < right) {
            if(height[left] < height[right]) {
                area = area < height[left] * (right - left) ? height[left] * (right - left) : area;
                left++;
            } else {
                area = area < height[right] * (right - left) ? height[right] * (right - left) : area;
                right--;
            }
        }

        return area;
    }
}