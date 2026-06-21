class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            if(i == 0 && accumulate(nums.begin() + 1, nums.end(),0) == 0){
                return 0;
            }
            else if(i ==nums.size()-1 && accumulate(nums.rbegin()+1, nums.rend(),0) ==0){
                return i;
            }
            else if( accumulate(nums.begin()+i+1, nums.end(),0) == accumulate(nums.rbegin()+nums.size()-i, nums.rend(),0)){

                return i;
            }
        }
        return -1;
    }
};