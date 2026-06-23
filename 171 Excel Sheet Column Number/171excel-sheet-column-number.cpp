class Solution {
public:
    int titleToNumber(string columnTitle) {
        string ans = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        long long int ret = 0;
        for(int i =columnTitle.size()-1;i>=0 ; i--){
            int jj = 0;
            for(int j=0;j<27;j++){
                if(ans[j] == columnTitle[i]){
                    jj=j;
                }
                
            }
            if(i== columnTitle.size() -1){
                ret += jj;
            }
            else{
                ret += pow(26,columnTitle.size()-1-i)*jj;
            }
        }
        return ret;
    }
};
