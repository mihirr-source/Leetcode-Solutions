class Solution {
public:
    string stringHash(string s, int k) {
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        for(int i = 0; i<s.size(); i+=k){
            int sum = 0;
            for(int j = i; j<i+k; j++){
                sum += s[j] - 'a';
            }
            ans.push_back(alpha[sum%26]);
        }
        return ans;
 
    }
};