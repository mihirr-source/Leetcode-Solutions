class Solution {
public:
    int maxOperations(string s) {
        long long fcount = 0;
        long long counto = 0;
        int j = 0;
        while(j+1<s.size()){
            if(s[j]=='1') {
                counto++;
            }
            else if((s[j]=='0' && s[j+1]=='1') ) fcount += counto;
            j++;
        }
        if(s[s.size()-1]=='0') fcount+=counto;
        return fcount;
    }
};