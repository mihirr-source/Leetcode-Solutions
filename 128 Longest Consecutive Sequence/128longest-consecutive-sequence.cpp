class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int count = 0;
        int temp = 0;
        if(nums.size() == 0){
            return 0;
        }
        for(int i = 0; i+1<nums.size(); i++){
            if(nums[i] +1 == nums[i+1]){
                count++;
            }
            else{
                count = 0;
            }
            temp = max(temp, count);
        }
        return temp+1;
    }
};