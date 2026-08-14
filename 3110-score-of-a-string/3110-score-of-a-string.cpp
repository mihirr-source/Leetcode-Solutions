class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        for(int i = 0; i+1<s.size(); i++){
            int a = s[i];
            int b = s[i+1];
            ans += abs(a-b);
        }
        return ans;
    }
};