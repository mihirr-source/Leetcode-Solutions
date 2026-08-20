class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string si = s;
        for(int i = 0; i<indices.size(); i++){
            si[indices[i]] = s[i];
        }
        return si;
    }
};