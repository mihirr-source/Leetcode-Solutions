class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0, maxlen = 0;
        int r = 0, n = fruits.size();
        unordered_map<int, int> ftypes;
        while(r<n){
            ftypes[fruits[r]]++;
            while(ftypes.size()>2){
                ftypes[fruits[l]]--;
                if(ftypes[fruits[l]]==0){
                    ftypes.erase(fruits[l]);
                }
                l++;
            }
            maxlen = max(maxlen, r-l+1);
            r++;
        }
        return maxlen;
    }
};