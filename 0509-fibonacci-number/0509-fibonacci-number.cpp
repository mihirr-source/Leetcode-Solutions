class Solution {
public:
    int num(int n){
        if(n==0) return 0;
        else if(n==1) return 1;
        else if(n==2) return 1;
        return num(n-2)+num(n-1);
    }
    int fib(int n) {
        return num(n);
    }
};