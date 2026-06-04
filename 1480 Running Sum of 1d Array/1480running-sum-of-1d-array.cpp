class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> n;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum = sum + nums[i];
            n.push_back(sum);
        }
        return n;
    }
};