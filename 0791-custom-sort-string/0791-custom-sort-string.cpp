class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        for(int i = 0; i<order.size(); i++){
            for(int j = 0; j<s.size(); j++){
                if(order[i]==s[j]){
                    ans.push_back(order[i]);
                }
            }
        }
        string merge = "";
        for(int i = 0; i<s.size(); i++){
            if(ans.find(s[i]) == -1){
                merge.push_back(s[i]);
            }
        }
        return ans + merge;
    }
};