class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a = 0;
        int k = 0;
        for(int j = k+1; j<nums.size(); j++){
            if(nums[k]==val){
                if(nums[j]!=val){
                    swap(nums[k],nums[j]);
                }
                else{
                    continue;
                }
            }
            k++;
        }
        for(int i = 0; i<nums.size();i++){
            if(nums[i]!= val){
                a+=1;
            }
        }
        return a;
        
        
    }
    
    
};