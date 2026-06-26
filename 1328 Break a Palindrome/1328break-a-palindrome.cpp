class Solution {
public:
    string breakPalindrome(string palindrome) {
        string ans = "";
        bool count = 0;
        if(palindrome.length() == 1){
            return ans;
        }
        for(int i = 0; i<palindrome.size()/2; i++){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                count = 1;
                break;
            }
        }
        if(!count){
            palindrome[palindrome.length() - 1] = 'b';
        }
        ans = palindrome;
        return ans;
    }
};