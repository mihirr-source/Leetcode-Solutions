class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if(arr.size()==0){
            return {};
        }
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        vector<int> ranks;
        int rank = 1;
        ranks.push_back(rank);
        for(int i = 1; i<temp.size(); i++){
            if(temp[i]>temp[i-1]){
                rank++;
            }
            ranks.push_back(rank);
        }
        vector<int> ans(ranks.size());
        for(int j=0; j<arr.size(); j++){
            auto n = lower_bound(temp.begin(), temp.end(), arr[j]);
            int u = n - temp.begin();
            ans[j]= ranks[u];
        }
        return ans;
    }
};