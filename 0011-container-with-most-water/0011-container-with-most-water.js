/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    let left = 0, right = height.length - 1, area = 0;

    while(left < right) {
        if(height[left] < height[right]) {
            area = Math.max(area, height[left] * (right - left));
            left++;
        } else {
            area = Math.max(area, height[right] * (right - left));
            right--;
        }
    }

    return area;
};