class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int colSize = matrix[0].size();
        int low = 0, high = matrix.size() * colSize - 1;

        while(low <= high) {
            int mid = low + (high - low) / 2;
            int row = mid / colSize, col = mid % colSize;

            if(matrix[row][col] == target) return true;
            if(matrix[row][col] < target) low = mid + 1;
            else high = mid - 1;
        }

        return false;
    }
};