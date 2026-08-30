class Solution(object):
    def searchMatrix(self, matrix, target):
        """
        :type matrix: List[List[int]]
        :type target: int
        :rtype: bool
        """
        colSize = len(matrix[0])
        low, high = 0, len(matrix) * colSize - 1

        while low <= high:
            mid = low + (high - low) // 2
            row, col = mid // colSize, mid % colSize

            if matrix[row][col] == target:
                return True
            elif matrix[row][col] < target:
                low = mid + 1
            else:
                high = mid - 1

        return False 