class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int drinked = 0, empty = 0, full = numBottles;
        while(full > 0) {
            drinked += full;
            empty += full;
            full = empty / numExchange;
            empty %= numExchange;
        }
        return drinked;
    }
}
