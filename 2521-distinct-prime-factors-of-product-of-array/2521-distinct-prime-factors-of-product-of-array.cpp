class Solution {
public:
    vector<int> get(long long int n){
        vector<int> nums;
        int i = 2;
        while(n>1){
            if(n%i == 0){
                nums.push_back(i);
                n /= i;
            }
            else{
                i++;
            }
        }
        return nums;
    }
    int distinctPrimeFactors(vector<int>& nums) {
        unordered_set<int> nn;
        for(int n : nums){
            vector<int> nj = get(n);
            nn.insert(nj.begin(), nj.end());
        }
        return nn.size();
    }
};