class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;
        for(int i: nums){
            int count = 0;
            int add = 0;
            for(int j = 1; (long long)j*j<=i ; j++){
                if(i%j == 0){
                    count++;
                    add +=j;
                    if(j != i/j){
                        count++;
                        add +=i/j;
                    }
                }
                
                if(count>4){
                    break;
                }
            }
            if(count == 4){
                ans += add;
            }
        }
        return ans;
    }
};