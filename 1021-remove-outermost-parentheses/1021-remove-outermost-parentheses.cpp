class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int left = 0;  
        int right = 0; 
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                if(left > right) {
                    ans.push_back(s[i]);
                }
                left++;
            } 
            else if (s[i] == ')') {
                right++;
                if(left > right) {
                    ans.push_back(s[i]);
                }
            }
            if(left == right) {
                left = 0;
                right = 0;
            }
        }
        return ans;
    }
};