class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Check if the matrix is empty
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }

        int rows = matrix.size();
        int cols = matrix[0].size();

        // Iterate through the rows to find the correct row as they are arranged
        for (int i = 0; i < rows; i++) {
            // Check if the first element of the current row is greater than the target
            if (matrix[i][0] > target) {
                if (i == 0) return false;
                // Search the previous row for the target as the rows are arranged in no decreasing pattern
                return find(matrix[i-1].begin(), matrix[i-1].end(), target) != matrix[i-1].end();
            }
        }
        // If the target is greater than or equal to the first element of the last row
        return find(matrix[rows-1].begin(), matrix[rows-1].end(), target) != matrix[rows-1].end();
    }
};
