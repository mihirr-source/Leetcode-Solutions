class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int j = nums.size()/2 ;
        int count = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==nums[j]) count++;
        }
        return count==1;
    }
};