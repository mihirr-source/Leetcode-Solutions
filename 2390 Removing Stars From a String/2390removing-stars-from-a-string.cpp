class Solution {
public:
    string removeStars(string s) {
        string sn = "";
        for(int i = 0; i<s.size(); i++){
            sn.push_back(s[i]);
            if(s[i]=='*'){
                if(sn.size()>1){
                    sn.pop_back();
                    sn.pop_back();
                }
                else{
                    sn.pop_back();
                }
            }
            
        }
        return sn;
    }
};