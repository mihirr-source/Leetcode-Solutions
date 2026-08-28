class Solution {
public:
    string interpret(string command) {
        string ans = "";
        string s = "";
        for(int i = 0; i<command.size(); i++){
            ans += command[i];
            if(ans=="G"){
                s.push_back('G');
                ans = "";
            }
            else if(ans=="()"){
                s.push_back('o');
                ans = "";
            }
            else if(ans=="(al)"){
                s.push_back('a');
                s.push_back('l');
                ans = "";
            }
            
        }
        return s;

    }
};