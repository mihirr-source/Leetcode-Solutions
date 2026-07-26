class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum = 0;
        long long x = 0;
        int i  = 0;
        while(n>0){
            if(n%10 != 0){
                sum += n%10;
                x = x + (n%10)*pow(10,i);
                i++;
            }
            n /= 10;
        }
        long long ans = x*sum;
        return ans;
    }
};