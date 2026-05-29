class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int j = nums.size();
        for(int i = 0; i< 2*j; i++){
            if(i<nums.size()){
                ans.push_back(nums[i]);
            }
            else{
                ans.push_back(nums[i-nums.size()]);
            }
        }
        return ans;
    }
};