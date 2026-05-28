class Solution {
public:
    int findComplement(int num) {
        int n = 0;
        int i = 0;
        
        while(num!=1){
            if (num==0){
            return 1;
            }
            else if((num&1)==1){
                n+=0;
                num = num>>1;
                i++;
            }
            else {
                n+= pow(2,i);
                num = num>>1;
                i++;
            }
        }
    
        return n;
    }
};