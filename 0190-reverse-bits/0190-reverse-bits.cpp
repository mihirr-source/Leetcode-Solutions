class Solution {
public:
    int reverseBits(int n) {
        vector<int> bits(32,0);
        int num = 0;
        if(n==0){
            return 0;
        }
        while(n>1){
            if(n%2==0){
                n /= 2;
                num++;
            }
            else{
                n--;
                bits[num]=1;
            }
        }
        bits[num] = 1;
        int ans = 0;
        for(int i =0; i<bits.size(); i++ ){
            ans += bits[i]*pow(2,bits.size()-i-1); 
        }
        return ans;

    }
};