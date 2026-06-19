class Solution {
public:
    int searchHigher(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                s = mid+1;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
    int searchLower(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                e = mid-1;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        return {searchLower(nums,target) , searchHigher(nums, target)};
    
    }
};