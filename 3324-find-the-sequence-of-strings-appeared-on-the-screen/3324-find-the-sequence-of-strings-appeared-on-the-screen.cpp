class Solution {
public:
    vector<string> stringSequence(string target) {
        string ans = "a";
        vector<string> output;
        int i = 0;
        while(ans != target){
            if(target[i]==ans[i]){
                output.push_back(ans);
                ans.push_back('a');
                i++;
            }
            else{
                output.push_back(ans);
                ans[i] = ans[i] + 1;
            }
        }
        output.push_back(ans);
        return output;
    }
};