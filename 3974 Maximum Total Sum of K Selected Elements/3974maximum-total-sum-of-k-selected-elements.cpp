class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end());
        int i = nums.size() - 1;
        long long int count = 0;
        while(k>0 && i>=0){
            if(mul>0){
                count += (long long)nums[i]*mul;
            }
            else{
                count += nums[i];
            }
            k--;
            mul--;
            i--;
        }
        return count;
    }
};