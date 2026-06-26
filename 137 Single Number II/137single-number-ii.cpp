class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        sort(nums.begin(), nums.end());

        if(nums[0]!=nums[1]){
            return nums[0];
        }
        for(int i = 1; i+1<nums.size(); i++){
            if(nums[i]>nums[i-1] && nums[i+1]>nums[i]){
                return nums[i];
            }
            else{
                continue;
            }
        }
        return nums[nums.size()-1];
    }
};