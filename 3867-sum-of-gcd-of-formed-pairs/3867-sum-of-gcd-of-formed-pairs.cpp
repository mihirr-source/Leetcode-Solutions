class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> gcds;
        int maxnum = 0;
        
        for(int i = 0; i<nums.size(); i++){
            maxnum = max(maxnum , nums[i]);
            gcds.push_back(gcd(maxnum, nums[i]));
        }
        sort(gcds.begin(),gcds.end());
        int i = 0;
        int j = gcds.size()-1;
        long long sum = 0;
        while(i<j){
            sum += gcd(gcds[i],gcds[j]);
            i++;
            j--;
        }
        return sum;
    }
};