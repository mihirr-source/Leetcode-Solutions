class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for (int j = 0; j < matrix.size() / 2; j++) {
            for (int i = j; i  < matrix.size()-1-j; i++) {
                swap(matrix[j][i], matrix[i][matrix[0].size() - 1 - j]);
                swap(matrix[j][i],matrix[matrix[0].size() - 1 - j][matrix[0].size() - 1  -i ]);
                swap(matrix[j][i], matrix[matrix[0].size() - 1 - i ][j]);
            }
        }
    }
};