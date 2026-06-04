class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        for (int i = 1; i<= 32; i++){
            if(bool (x&1) != bool (y&1)){
                count++;
                x = x>>1;
                y = y>>1;
                
            }
            else{
                x = x>>1;
                y = y>>1;
                
            }
           
        }
        return count;
    }
};