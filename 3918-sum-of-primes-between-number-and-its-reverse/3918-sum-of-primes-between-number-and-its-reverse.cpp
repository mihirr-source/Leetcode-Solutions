class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int j = n;
        int r = 0;
        while(j>0){
            r = r*10 + j%10;
            j = j/10;
        }
        int maxi = max(r,n);
        int mini = min(r,n);
        vector<bool> sieve(maxi+1,1);
        sieve[0] = 0;
        sieve[1] = 0;
        for(int i = 2; i<sieve.size(); i++){
            if(sieve[i]){
                for(int j = 2*i ; j<sieve.size(); j+=i){
                    sieve[j]=0;
                }
            }
        }
        int sum = 0;
        for(int i = mini; i<maxi+1; i++){
            if(sieve[i]){
                sum+=i;
            }
        }
        return sum;
    }
};