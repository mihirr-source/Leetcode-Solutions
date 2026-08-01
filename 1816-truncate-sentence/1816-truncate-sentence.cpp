class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        string ans = "";
        int i = 0;
        while(count<k && i<s.size()){
            if(s[i]==' '){
                count++;
            }
            ans.push_back(s[i]);
            i++;
        }
        if(s.size()!=ans.size()){
            ans.pop_back();
        }
        return ans;
    }
};