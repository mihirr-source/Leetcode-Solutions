class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i = 0; i<mat.size(); i++){
            sum += mat[i][i];
        }
        for(int i = 0; i<mat.size(); i++){
            sum += mat[mat.size()-i-1][i];
        }
        if(mat.size()%2 == 1){
            return sum-mat[mat.size()/2][mat.size()/2];
        }
        return sum;
    }
};