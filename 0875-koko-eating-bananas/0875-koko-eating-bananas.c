bool check(int* piles, int pilesSize, int h, int speed) {
    long long hour = 0;
    for(int i = 0; i < pilesSize; i++) hour += (piles[i] + speed - 1) / speed;

    return hour <= h;
}

int minEatingSpeed(int* piles, int pilesSize, int h) {
    int low = 1, high = 0, ans = 0;

    for(int i = 0; i < pilesSize; i++) 
        high = (high < piles[i]) ? piles[i] : high;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(check(piles, pilesSize, h, mid)) {
            ans = mid;
            high = mid - 1;
        } else low = mid + 1;
    }

    return ans;
}