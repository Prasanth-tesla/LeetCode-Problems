int trap(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;

    int leftMax, rightMax, rain;
    leftMax = rightMax = rain = 0;

    while(left < right) {
        if(height[left] < height[right]) {
            if(height[left] < leftMax)
                rain += leftMax - height[left];
            else leftMax = height[left];
            left++;
        } else {
            if(height[right] < rightMax)
                rain += rightMax - height[right];
            else rightMax = height[right];
            right--;
        }
    }

    return rain;
}