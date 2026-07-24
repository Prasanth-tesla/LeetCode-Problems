bool check(int *weights, int capacity, int weightsSize, int days) {
    int currDays = 1;
    int load = 0;
    for (int i = 0; i < weightsSize; i++) {
        if (weights[i] > capacity) return false;

        if (load + weights[i] <= capacity) {
            load += weights[i];
        } else {
            currDays++;
            load = weights[i];
        }
    }
    return currDays <= days;
}

int shipWithinDays(int* weights, int weightsSize, int days) {
    int sum = 0;
    for(int i = 0;i < weightsSize;i++) 
        sum += weights[i];
    int low = 0, high = sum, ans = -1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if (check(weights, mid, weightsSize, days)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}