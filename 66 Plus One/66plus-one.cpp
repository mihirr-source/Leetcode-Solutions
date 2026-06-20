class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int count = 0;
        bool hi = false;
        for(int i = 0; i<digits.size(); i++){
            if(digits[i]==9){
                count ++;
            }
            else {
                hi = false;
            }
        }
        if(count == digits.size()){
            hi = true;
        }
        if(hi){
            ans.push_back(1);
            for(int i = 0; i<digits.size(); i++){
                ans.push_back(0);
            }
            
        }
        else if(digits[digits.size()-1] != 9){
            digits[digits.size()-1] += 1;
            for(int i = 0; i<digits.size(); i++){
                ans.push_back(digits[i]);
            }
        }
        else if(digits[digits.size()-1] == 9 && digits.size()>1){
            for(int i = digits.size() - 1; i>=0; i--){
                if(digits[i]==9){
                    digits[i]=0;
                }
                else{
                    digits[i] +=1;
                    break;
                }
            }
            for(int i = 0; i<digits.size(); i++){
                ans.push_back(digits[i]);
            }
        }
        return ans;    
    }
};