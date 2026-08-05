class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int l = 0; 
        int r = 0;
        while(r<s.size() && l<s.size()){
            if(s[r]!=' '){
                r++;
            }
            else{
                reverse(s.begin()+l, s.begin()+r);
                l = r+1;
                r++;
            }
        }
        reverse(s.begin()+l, s.begin()+r);
        int spaces = 0;
        string ans = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i]!=' '){
                ans.push_back(s[i]);
                spaces = 0;
            }
            else{
                if(ans.size()==0){
                    continue;
                }
                spaces++;
                if(spaces==1){
                    ans.push_back(s[i]);
                }
            }
        }
        while(ans.back() == ' '){
            ans.pop_back();
        }
        return ans;
    }
};