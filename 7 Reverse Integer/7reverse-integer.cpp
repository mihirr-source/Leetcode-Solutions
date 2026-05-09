class Solution {
public:
    int reverse(int x) {
        long long ans = 0;
        int i = 0;
        int lower = - pow(2,31) ;
        int higher = pow(2,31) - 1;
        int v =0;
    
    
        while (x!=0){
        
            int digit = x%10;
            ans = ans*10 + digit;
            x = x/10;
            i++;
            if (ans>= lower && ans<= higher){

                v = ans;
            }
            
            else {
                v = 0;
                break;
                
            }
        
        }
        return v;

        
    }
};