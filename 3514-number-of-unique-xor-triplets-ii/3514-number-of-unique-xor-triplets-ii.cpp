class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> twoxors;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<nums.size(); j++){
                twoxors.insert(nums[i]^nums[j]);
            }
        }
        unordered_set<int> ans;
        for(int i = 0; i<nums.size(); i++){
            for(const auto j: twoxors){
                ans.insert(nums[i]^j);
            }
        }
        return ans.size();
    }
};