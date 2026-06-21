class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int front = 0;
        int last = 0;
        int m = -1;
        
        if(k == 1){
            if(nums.size() == 1) return nums[0];
            
            sort(nums.begin(), nums.end());
            
            if(nums[nums.size()-1] != nums[nums.size() - 2]){
                return nums[nums.size() - 1];
            }
            
            if(nums[0] != nums[1]){
                m = max(m, nums[0]);
            }
            
            
            for(int i = 1; i < nums.size() - 1; i++){
                if(nums[i-1] < nums[i] && nums[i] < nums[i+1]){
                    m = max(m, nums[i]);
                }
            }
            return m;
        }
        
        if(k == nums.size()){
            for(int i = 0; i < nums.size(); i++){
                m = max(m, nums[i]);
            }
            return m;
        }
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[0]){
                front++;
            }
            else if(nums[i] == nums[nums.size() - 1]){
                last++;
            }
        }

        if(nums[0] == nums[nums.size() - 1] || (front > 1 && last > 1)){
            return -1;
        }
        else if(front > 1){
            return nums[nums.size() - 1];
        }
        else if(last > 1){
            return nums[0];
        }
        else{
            return max(nums[0], nums[nums.size() - 1]);
        }
    }
};