class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
            else {continue;}
        }
        int k = 0;
        for(int j = k+1; j<nums.size(); j++){
            if(nums[k]==0){
                if(nums[j]!=0){
                    swap(nums[k],nums[j]);
                }
                else{
                    continue;
                }
            }
            k++;
        }
        return nums;
    }
};