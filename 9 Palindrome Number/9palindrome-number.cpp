class Solution {
public:
    bool isPalindrome(int x) {
        long long y = 0;
        int z = x;
        if(x<0){return false;}
        while(z!=0){
            y = y*10 + z%10;
            z = z/10;
        }
        if (y==x){return true;}
        return false;
    }
};