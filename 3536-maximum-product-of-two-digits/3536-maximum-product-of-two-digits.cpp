class Solution {
public:
    int maxProduct(int n) {
        vector<int> lis;
        while(n>0){
            lis.push_back(n%10);
            n = n/10;
        }
        sort(lis.begin(), lis.end());
        return lis.back()*lis[lis.size()-2];
    }
};