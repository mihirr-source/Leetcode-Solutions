class Solution {
public:
    bool search(vector<int>& nums, int target) {
        set<int> ms;
        for(int i:nums){
            ms.insert(i);
        }
        return binary_search(ms.begin(),ms.end(), target);
    }
};