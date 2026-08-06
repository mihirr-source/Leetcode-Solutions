class Solution {
public:
    int smallestNumber(int n, int t) {
        int anss = 0;
        for(int i = n; i<n+11; i++){
            int mul = 1;
            int a = i;
            while(a>0){
                mul *= a%10;
                a /= 10;
            }
            if(mul%t == 0){
                anss = i;
                break;
            }
        }
        return anss;
        
    }
};