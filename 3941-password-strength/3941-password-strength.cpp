class Solution {
public:
    int passwordStrength(string password) {
        int ans = 0;
        unordered_set<char> ms(password.begin(), password.end());
        for(char i: ms){
            if(i>='a' && i<='z'){
                ans++;
            }
            else if(i>='A' && i<='Z'){
                ans+=2;
            }
            else if(i>='0' && i<='9'){
                ans+=3;
            }
            else{
                ans+=5;
            }
        }
        return ans;

    }
};