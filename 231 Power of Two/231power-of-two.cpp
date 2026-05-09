class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool x = 1;
        int i = 0;
        
        while(i<31) {
            signed y = pow(2,i);
            if (n == y){
                x = 1;
                break;
               
            } 
            
            else {
                i++;
                x=0;
                
            }
        }
        return bool (x);
    }
};