class Solution {
public:
    int get(int n){
        int sum = 0;
        int i = 2;
        while(n>1){
            if(n%i == 0){
                sum += i;
                n /= i;
            }
            else{
                i++;
            }
        }
        return sum;
    }
    int smallestValue(int n) {
        int ans  = get(n);
        if(ans == n) return n;
        else {
            return smallestValue(ans);
        }
        
    }
};