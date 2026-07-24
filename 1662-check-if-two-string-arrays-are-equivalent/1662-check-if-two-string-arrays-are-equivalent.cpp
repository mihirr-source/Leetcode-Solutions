class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string f1 = "";
        string f2 = "";
        for(string i: word1){
            f1 += i;
        }
        for(string i: word2){
            f2 += i;
        }
        return f1==f2;
    }
};