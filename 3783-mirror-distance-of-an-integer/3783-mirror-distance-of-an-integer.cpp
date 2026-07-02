class Solution {
public:
    int mirrorDistance(int n) {
        long long reverse = 0;
        int x = n;
        while(x>0){
            reverse = reverse*10 + x%10;
            x = x/10;
        }
        return abs(n-reverse);
    }
};