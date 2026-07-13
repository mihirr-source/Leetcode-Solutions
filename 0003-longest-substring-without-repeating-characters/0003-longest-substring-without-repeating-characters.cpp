class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        int l = 0;
        int r = 0;
        int n = s.size();
        vector<int> hash(256, -1);
        while (r < n) {
            if (hash[s[r]] == -1) {
                hash[s[r]] = r;
            } 
            else {
                if (hash[s[r]] >= l) {
                    l = hash[s[r]] + 1;
                }
                hash[s[r]] = r;
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }
        return maxlen;
    }
};