class Solution {
public:
    int max(int num1, int num2) {
        if(num1 > num2)
            return num1;
        return num2;
    }
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxC = 0;
        for(int num : nums) {
            if(num == 1) {
                count++;
                maxC = max(count, maxC);
            }
            else
                count = 0;
        }
        return maxC;
    }
};
