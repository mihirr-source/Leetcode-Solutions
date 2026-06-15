class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> temp(nums.size());
        
        for(int i =0; i<nums.size(); i++){
            int a = (i+k)%nums.size();
            temp[a]=nums[i];
        }
        
        nums = temp;
    }
    
};