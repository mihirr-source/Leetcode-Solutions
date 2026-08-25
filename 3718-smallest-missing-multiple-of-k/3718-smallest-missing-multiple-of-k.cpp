class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> arr;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]%k == 0){
                arr.insert(nums[i]/k);
            }
        }
        vector<int> arr2(arr.begin(),arr.end());
        sort(arr2.begin(),arr2.end());
        for(int i = 0; i<arr2.size(); i++){
            if(arr2[i] != i+1){
                return k*(i+1);
            }
        }
        return k*(arr2.size()+1);
    }
};