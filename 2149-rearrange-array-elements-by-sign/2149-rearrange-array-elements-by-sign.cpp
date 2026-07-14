class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> posnums;
        vector<int> negnums;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] >0){
                posnums.push_back(nums[i]);
            }
            else{
                negnums.push_back(nums[i]);
            }
        }
        vector<int> ans;
        for(int i = 0; i<posnums.size(); i++){
            ans.push_back(posnums[i]);
            ans.push_back(negnums[i]);
        }
        return ans;
    }
};