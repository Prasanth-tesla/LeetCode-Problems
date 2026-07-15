class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int sum = 0;
		for(int i = 0;i < weights.length;i++) 
			sum += weights[i];
		int low = 0, high = sum, ans = -1;
		while(low <= high) {
			int mid = (low + high) / 2;
			if (check(weights, mid, days)) {
			    ans = mid;
			    high = mid - 1;
			} else {
			    low = mid + 1;
			}
		}
		return ans;
    }

    public boolean check(int[] weights, int capacity, int days) {
    int currDays = 1;
    int load = 0;
    for (int weight : weights) {
        if (weight > capacity) return false;

        if (load + weight <= capacity) {
            load += weight;
        } else {
            currDays++;
            load = weight;
        }
    }
    return currDays <= days;
}
}
