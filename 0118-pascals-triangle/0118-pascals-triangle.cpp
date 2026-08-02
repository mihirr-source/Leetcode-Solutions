class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0) return {};
        else if(numRows == 2) return {{1},{1,1}};
        else if(numRows == 1) return {{1}};
        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1, 1}); 
        for(int i = 2; i < numRows; i++){ 
            vector<int> jj;
            jj.push_back(1);
            
            for(int j = 0; j+1<ans[i-1].size(); j++){
                jj.push_back(ans[i-1][j]+ans[i-1][j+1]);
            }
            jj.push_back(1);
            ans.push_back(jj); 
        }
        
        return ans;
    }
};