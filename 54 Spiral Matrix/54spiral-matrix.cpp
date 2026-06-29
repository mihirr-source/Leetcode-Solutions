class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i; j < matrix[0].size() - i; j++) {
                if (ans.size() == matrix.size() * matrix[0].size()) {
                    return ans;
                }
                ans.push_back(matrix[i][j]);
            }
            for (int k = i + 1; k < matrix.size() - i; k++) {
                if (ans.size() == matrix.size() * matrix[0].size()) {
                    return ans;
                }
                ans.push_back(matrix[k][matrix[0].size() - i - 1]);
            }
            for (int l = matrix[0].size() - i - 2; l >= i; l--) {
                if (ans.size() == matrix.size() * matrix[0].size()) {
                    return ans;
                }
                ans.push_back(matrix[matrix.size() - i - 1][l]);
            }
            for (int m = matrix.size() - i - 2; m > i; m--) {
                if (ans.size() == matrix.size() * matrix[0].size()) {
                    return ans;
                }
                ans.push_back(matrix[m][i]);
            }
            if (ans.size() == matrix.size() * matrix[0].size()) {
                return ans;
            }
        }
        return ans;
    }
};