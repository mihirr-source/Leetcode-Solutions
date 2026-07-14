class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0;
        int j = 0;
        int count = 0;
        while(i<t.size() && j<s.size()){
            if(s[j]==t[i]){
                i++;
                count++;
            }
            j++;
        }
        return t.size() - count;
    }
};