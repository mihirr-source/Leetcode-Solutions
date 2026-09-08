class Solution {
public:
    int countCommas(int n) {
        int a = n - 1000 + 1;
        if(a>0){
            return a;
        }
        return 0;
    }
};