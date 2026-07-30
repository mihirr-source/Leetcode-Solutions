class Solution {
public:
    int minimumPushes(string word) {
        if(word.size()<=8){
            return word.size();
        }
        else if(word.size()<=16){
            int a = word.size() - 8;
            return 2*a + 8;
        }
        else if(word.size()<=24){
            int a = word.size()-16;
            return 3*a + 24;
        }
        else{
            int a = word.size()-24;
            return 4*a + 48;
        }
        return 0;
    }
};