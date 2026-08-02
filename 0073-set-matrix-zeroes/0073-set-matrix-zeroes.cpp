class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        for(int i = 0; i<ans.size(); i++){
            if(i%2 == 0){
                for(int j = 0; j<matrix[0].size(); j++){
                    matrix[ans[i]][j] = 0;
                }
            }
            else{
                for(int k = 0; k<matrix.size(); k++){
                    matrix[k][ans[i]] = 0;
                }
            }
        }
    }
};