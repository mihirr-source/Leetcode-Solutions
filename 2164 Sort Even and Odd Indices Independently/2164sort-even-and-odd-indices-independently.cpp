class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        for(int i = 0; i< nums.size(); i+=2){
        int minValue = i;
            for(int j = i+2; j<nums.size(); j+=2){
                if(nums[j]<nums[minValue]){
                    minValue = j;
                }
            }
            swap(nums[i],nums[minValue]);
        }
        for(int i = 1; i< nums.size(); i+=2){
            int minValue = i;
            for(int j = i+2; j<nums.size(); j+=2){
                if(nums[j]>nums[minValue]){
                    minValue = j;
                }
            }
            swap(nums[i],nums[minValue]);
        }
        return nums;
    }
};