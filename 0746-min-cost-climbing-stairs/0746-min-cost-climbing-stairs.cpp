class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int size = cost.size();

        if(size < 2) return 0;
        if(size == 2) return min(cost[0], cost[1]); 
        int res[size];
        res[0] = cost[0];
        res[1] = cost[1];
        for(int i = 2;i < size;i++)
            res[i] = min(cost[i] + res[i-1], cost[i] + res[i-2]);
        
        return min(res[size-1], res[size-2]);
    }
};