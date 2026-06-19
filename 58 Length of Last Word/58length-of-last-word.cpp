class Solution {
public:
    int lengthOfLastWord(string s) {
        int j = s.size() - 1;
        int count = 0;
        while(j>=0){
            if(s[j]==' ' && count!=0){
                break;
            }
            else if(s[j]==' ' && count==0){
                1;
            }
            else{
                count++;
            }
            j--;
        }
        return count;
    }
};