class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0;
        for(int i = 0; i<patterns.size(); i++){
            for(int j = 0; j<word.size(); j++ ){
                string com = word.substr(j, patterns[i].size());
                if(com == patterns[i]){
                    count++;
                    break;
                }    
            }
        }
        return count;
    }
};