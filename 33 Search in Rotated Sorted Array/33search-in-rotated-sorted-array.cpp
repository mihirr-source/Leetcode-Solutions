class Solution {
public:
    int pivotElement(vector<int>& nums, int target){
        int s = 0;
        int n = nums.size();
        int e = n-1;
        int mid = s + (e-s)/2 ;
        
        while(s < e){
            if(nums[mid] >= nums[0]){
                s = mid + 1 ;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2 ;
        }
        return s;
    }
    
    int binarySearch(vector<int>& nums, int target, int s, int e){
        int mid = s + (e-s)/2 ;
        while(s <= e){
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                s = mid + 1;
            }
            else {
                e = mid - 1;
            }
            mid = s + (e-s)/2 ;
        }   
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = pivotElement(nums, target);
        if(target >= nums[pivot] && target <= nums[n-1]){ 
            return binarySearch(nums, target, pivot, n-1);
        }
        else{
            return binarySearch(nums, target, 0, pivot-1); 
        }
    }
};