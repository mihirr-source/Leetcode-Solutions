class Solution {
public:
    int myAtoi(string s) {
        bool negative = false;
        string ans = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i]==' ' && ans.empty()){
                continue;
            }
            else if(isdigit(s[i]) || s[i] == '-' || s[i]=='+'){
                if(s[i]==0 && ans.empty()){
                    continue;
                }
                else if(s[i] != '-'){
                    ans.push_back(s[i]);
                }
                else if(!negative){
                    ans.push_back('-');
                    negative = true;
                }
                else{
                    break;
                }
            }
            else{
                break;
            }
        }
        if (!ans.empty() && ans != "+" && ans != "-") {
            try {
                int num = stoi(ans);
                return num;
            } 
            catch (const out_of_range& e) {
                return negative ? INT_MIN : INT_MAX;
            } 
            catch (const invalid_argument& e) {
                return 0;
            }
        }
        return 0;
    }

}; 

