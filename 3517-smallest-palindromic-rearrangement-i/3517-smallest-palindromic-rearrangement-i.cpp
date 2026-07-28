class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.size() == 1) return s;
        string a = "";
        for(int i = 0; i<s.size()/2; i++){
            a += s[i];
        }
        sort(a.begin(), a.end());
        string j = "";
        if(s.size()%2 == 1){
            j = s[(s.size()/2)];
        }
        string u = "";
        for(int i = a.size()-1; i>=0; i--){
            u += a[i];
        }
        return a+j+u;
    }
};