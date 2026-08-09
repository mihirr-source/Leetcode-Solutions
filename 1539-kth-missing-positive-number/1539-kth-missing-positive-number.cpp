class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int county = 0;
        vector<int> count(2200,0);
        for(int i = 0; i<arr.size(); i++){
            count[arr[i]] = 1;
        }
        for(int i = 1; i<2201; i++){
            if(!count[i]){
                county++;
            }
            if(county==k){
                return i;
            }
        }
        return 0;
    }
};