class Solution {
    public int minEatingSpeed(int[] piles, int h) {
        int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE;
		for(int i = 0;i < piles.length;i++) {
			if(max < piles[i])
				max = piles[i];
			if(min > piles[i])
				min = piles[i];
		}
		
		int low = 1, high = max, ans = -1;
		while(low <= high) {
			int mid = (low + high) / 2;
			if(check(piles, mid, h)) {
				ans = mid;
				high = mid - 1;
			}
			else {
				low = mid + 1;
			}
		}
		return ans;
    }

    public boolean check(int[] piles, int mid, int h) {
		long currHours = 0;
		for(int a : piles) {
			currHours += a / mid;
			if(a % mid != 0)
				currHours++;
		}
		return currHours <= h;
	}
}
