class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& mat) {
        int n = mat.size();         // Number of rows in the matrix
        int m = mat[0].size();      // Number of columns in the matrix
        
        vector<int> row(n, 1e6);    // Initialize vector to store minimum values for each row, initially set to a large number
        vector<int> col(m, 0);      // Initialize vector to store maximum values for each column, initially set to 0
        
        // Step 1: Find minimum values for each row and maximum values for each column
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                row[i] = min(row[i], mat[i][j]);   // Update minimum value for row i
                col[j] = max(col[j], mat[i][j]);   // Update maximum value for column j
            }
        }

        vector<int> ans;  // Initialize vector to store lucky numbers
        
        // Step 2: Check if any element in the matrix is both its row's minimum and its column's maximum
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int k = row[i];   // Minimum value of row i
                int l = col[j];   // Maximum value of column j
                if (mat[i][j] == k && k == l) {   // Check if mat[i][j] is both the row's minimum and column's maximum
                    ans.push_back(mat[i][j]);     // Add mat[i][j] to the lucky numbers
                }
            }
        }

        return ans;   // Return the vector of lucky numbers
    }
};