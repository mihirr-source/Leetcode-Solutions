class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        int ssmall = 0;
        int sbig = 0;
        for(int i = 0; i<k; i++){
            ssmall += nums[i];
            sbig += nums[nums.size()-1-i];
        }
        return abs(sbig - ssmall);
    }
};