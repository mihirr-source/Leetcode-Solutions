class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        vector<bool> ans(strs.size());
        int zeroes = 0;
        int ones = 0;
        for(int i : s){
            if(i == '0') zeroes++;
            else ones++;
        }
        vector<int> zero(strs.size());
        vector<int> one(strs.size());
        for(int i = 0; i<strs.size(); i++){
            for(int j = 0; j<s.size(); j++){
                if(strs[i][j] == '0') zero[i]++;
                else if(strs[i][j]=='1') one[i]++;
            }
        }
        for(int i = 0; i<strs.size(); i++){
            if((zeroes < zero[i] ) || (ones < one[i])){
                ans[i] = false;
            }
            else{
                ans[i] = true;
            }
        }
        vector<string> completed(strs.size());
        for(int i = 0; i<strs.size(); i++){
            string l = "";
            if(ans[i]==true){
                for(int j = 0; j<s.size(); j++){
                    if(strs[i][j] != '?'){
                        l.push_back(strs[i][j]);
                    }
                    else{
                        if(zero[i]<zeroes){
                            l.push_back('0');
                            zero[i]++;
                        }
                        else if(one[i]<ones){
                            l.push_back('1');
                            one[i]++;
                        }
                    }
                }
                if (zero[i] != zeroes || one[i] != ones) {
                    ans[i] = false;
                } 
                else {
                    completed[i] = l;
                }
            }
        }
        for(int i = 0; i<strs.size(); i++){
            int count1 = 0;
            int count2 = 0;
            if(ans[i]){
                for(int j = 0; j<s.size(); j++){
                    
                    if(completed[i][j] == '1') count1++;
                    if(s[j] == '1') count2++;
                    if(count1 > count2){
                        ans[i] = false;
                        break;
                    }
                }
            }
        }
        return ans;
        
    }
};