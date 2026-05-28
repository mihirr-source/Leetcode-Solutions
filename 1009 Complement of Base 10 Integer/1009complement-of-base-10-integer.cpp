class Solution {
public:
    int bitwiseComplement(int n) {
        int num = 0;
        int i = 0;
        
        while(n!=1){
            if (n==0){
            return 1;
            }
            else if((n&1)==1){
                num+=0;
                n = n>>1;
                i++;
            }
            else {
                num+= pow(2,i);
                n = n>>1;
                i++;
            }
        }
    
        return num;

    }
   

};