class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
  int i = 0;
  int j = size-1;
  while (i<j)
  {
    if(nums[i]%2==0) i++;
    else if(nums[j]%2==1) j--;
    else{
      swap(nums[i],nums[j]);
      i++;
      j--;
    }
  }
  return nums;
    }
};