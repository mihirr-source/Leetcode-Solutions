class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(m*n != original.size()){
            return {};
        }
        for(int i = 0; i<m; i++){
            vector<int> arr(original.begin() + i*n, original.begin() + i*n+ n);
            ans.push_back(arr);
        }
        return ans;
    }
};