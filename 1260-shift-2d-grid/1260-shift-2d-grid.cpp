class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        for(int i = 0; i<k; i++){
            for(int j = 1; j<grid[0].size(); j++){
                for(int k = 0; k<grid.size(); k++){
                    swap(grid[k][0], grid[k][j]);
                }
            }
            for(int l = grid.size()-1; l>0; l--){
                swap(grid[l][0], grid[l-1][0]);
            }
        }
        return grid;
    }
};