class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> my_map;
        for(int i= 0; i<nums.size(); i++){
            my_map[nums[i]]++;
        }
        for(auto const& pair: my_map){
            if(pair.second > nums.size()/3){
                ans.push_back(pair.first);
            }
        }
        return ans;

    }
};