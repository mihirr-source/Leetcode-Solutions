class Solution {
public:
    int addDigits(int num) {
        for(int i = 0; i<num; i++){
            if(num/10 == 0){
            
            break;
        }
        else {
            num = num/10 + num%10;
        }

        }
        return num;
        
        
    }
    
};