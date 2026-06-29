class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int s = 0;
        int e = n - 1;
        
        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (target >= matrix[mid][0] && target <= matrix[mid][m - 1]) {
                return binary_search(matrix[mid].begin(), matrix[mid].end(), target);
            }
            
            else if (target < matrix[mid][0]) {
                e = mid - 1;
            }
            
            else {
                s = mid + 1; 
            }
        }
        
        return false;
    }
};