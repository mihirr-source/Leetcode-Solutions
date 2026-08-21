class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum = accumulate(nums.begin(), nums.end(), 0);
        int digsum = 0;
        for(int i = 0; i<nums.size(); i++){
            int temp = 0;
            int ele = nums[i];
            while(ele>0){
                temp += ele%10;
                ele /= 10;
            }
            digsum += temp;
        }
        return abs(elesum - digsum);

    }
};