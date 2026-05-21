class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        for (int i = 0; i<INT_MAX; i++){
            if(num == 0){
                break;
            }
            else if(num%2 == 0) {
                count++;
                num = num/2;
            }
            else {
                count++;
                num = num-1;
            }
        }
        return count;
        
    }
};