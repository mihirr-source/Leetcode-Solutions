class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int sizea = 0;
        int sizeb = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='a'){
                sizea++;
            }
            else{
                sizeb++;
            }
        }
        return abs(sizea - sizeb);
    }
};