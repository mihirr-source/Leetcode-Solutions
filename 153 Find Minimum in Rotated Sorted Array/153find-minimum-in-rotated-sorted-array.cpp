class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n-1;
        int mid = s + (e-s)/2;
        int mini = INT_MAX;
        while(s<=e){
            mini = min(mini,nums[mid]);
            if(nums[s]<=nums[mid]){
                mini = min(mini,nums[s]);
                s = mid+1;
            }
            else{
                e = mid;
                
            }
            mid = s + (e-s)/2;
        }
        return mini;
    }
};