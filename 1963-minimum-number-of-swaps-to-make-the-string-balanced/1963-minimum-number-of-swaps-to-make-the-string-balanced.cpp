class Solution {
public:
    int minSwaps(string s) {
        int opening = 0;
        int closing = 0;
        int ans = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]==']') closing++;
            else opening++;
            if(closing>opening){
                ans++;
                closing--;
                opening++;
            }
        }
        return ans;
    }
};