class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans(pref.size());
        int j = pref[0];
        ans[0] = pref[0];
        for(int i = 1; i<pref.size(); i++){
            j = pref[i]^pref[i-1];
            ans[i] = (j);
        }
        return ans;
    }
};