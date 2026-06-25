class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int totalsum = accumulate(nums.begin(), nums.end(), 0);
        vector<int> answer;
        int leftsum = 0;
        for(int i = 0; i<nums.size(); i++){
            int rightsum = totalsum - leftsum - nums[i];
            answer.push_back(abs(rightsum-leftsum));
            leftsum += nums[i];
        }
        return answer;    
    }
};