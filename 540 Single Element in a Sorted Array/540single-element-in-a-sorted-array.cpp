class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s = 0;
        int ans = -1;
        while(s+1<nums.size() ){
            if(nums[s]!=nums[s+1]){
                return nums[s];
                
            }
            s+=2;
        }
        return nums[nums.size() - 1];
        
    }
};