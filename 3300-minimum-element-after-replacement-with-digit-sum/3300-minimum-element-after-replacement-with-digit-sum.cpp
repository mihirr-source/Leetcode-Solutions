class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            int num = 0;
            while(nums[i]>0){
                num += nums[i]%10;
                nums[i] /= 10;
            }
            ans.push_back(num);
        }
        sort(ans.begin(), ans.end());
        return ans[0];
    }
};