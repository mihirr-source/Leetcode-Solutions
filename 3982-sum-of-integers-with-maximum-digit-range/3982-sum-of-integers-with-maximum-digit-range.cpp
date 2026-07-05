class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> ranges;
        for(int i = 0; i<nums.size(); i++){
            int mini = 9;
            int maxi = 0;
            int range;
            int jj = nums[i];
            while(jj>0){
                mini = min(mini,jj%10);
                maxi = max(maxi,jj%10);
                jj = jj/10;
            }
            range = maxi-mini;
            ranges.push_back(range);
        }
        int ans = 0;
        int maxrange = INT_MIN;
        for(int i = 0;i<nums.size(); i++){
            maxrange = max(maxrange, ranges[i]);
        }
        for(int i = 0; i<nums.size(); i++){
            if(ranges[i]==maxrange) ans+=nums[i];
        }
        return ans;
    }
};