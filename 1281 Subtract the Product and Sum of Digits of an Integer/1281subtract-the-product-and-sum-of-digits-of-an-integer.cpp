class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int prod = 1;
        while(n!=0){
            int p = n%10;
            
            prod = prod * p;
            sum = sum + p;
            n=n/10;
        }
        int solution = prod-sum;
        return solution;
        
    }
};