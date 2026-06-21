class Solution {
public:
    string convertToTitle(int columnNumber) {
        string a = "ZABCDEFGHIJKLMNOPQRSTUVWXY";
        string s = "";
        while(columnNumber>=1){
            s += a[columnNumber % 26];
            columnNumber = (columnNumber - 1) / 26;
        }
        reverse(s.begin(), s.end());
        return s;
    }
};