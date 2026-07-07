class Solution {
public:
    int minOperations(vector<int>& nums) {
        int l = 0;
        int count = 0;
        while(l+2<nums.size()){
            if(nums[l]==1){
                l++;
            }
            else{
                nums[l] = 1;
                nums[l+1] ^= 1; 
                nums[l+2] ^= 1; 
                count++;
                l++;
            }
        }
        if(nums[nums.size()-1] == 0 || nums[nums.size()-2] == 0) count = -1;
        return count;
    }
};