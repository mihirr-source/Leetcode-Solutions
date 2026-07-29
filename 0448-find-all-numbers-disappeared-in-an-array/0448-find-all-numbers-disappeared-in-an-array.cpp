class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> ans(nums.size()+1, false);
        unordered_set<int> ms;
        for(int i:nums){
            ms.insert(i);
        }
        for(int i: ms){
            ans[i] = true;
        }
        vector<int> r;
        for(int i = 1; i<ans.size(); i++){
            if(!ans[i]){
                r.push_back(i);
            }
        }
        return r;
    }
};