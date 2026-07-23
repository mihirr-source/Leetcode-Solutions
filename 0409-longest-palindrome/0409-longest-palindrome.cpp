class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size() == 1){
            return 1;
        }
        vector<int> hash(128);
        for(int i = 0; i<s.size(); i++){
            hash[s[i]]++;
        }
        int ans = 0;
        int count = 0;
        for(int i = 0; i<128; i++){
            if(hash[i]%2 == 0){
                ans += hash[i];
            }
            else if(hash[i]%2 ==1){
                ans += (hash[i]/2)*2;
                count = 1;
            }
        }
        if(count){
            return ans + 1;
        }
        return ans;
    }
};