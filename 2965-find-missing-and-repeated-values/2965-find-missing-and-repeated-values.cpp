class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans;
        vector<int> ele(grid.size()*grid.size() + 1);
        for(int i = 0; i<grid.size(); i++){
            for(int j = 0;j<grid[0].size(); j++ ){
                ele[grid[i][j]]++;
            }
        }
        int a = 0;
        int b = 0;
        for(int i = 0; i<ele.size(); i++){
            if(ele[i]==0){
                b = i;
            }
            else if(ele[i]==2){
                a = i;
            }

        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;

    }
};