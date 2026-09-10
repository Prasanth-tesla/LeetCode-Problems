int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;
    int area = 0;

    while(left < right) {
        int currArea = 0;
        if(height[left] < height[right]) {
            currArea = height[left] * (right - left);
            left++;
        } else {
            currArea = height[right] * (right - left);
            right--;
        }
        if(currArea > area) area = currArea;
    }

    return area;
}