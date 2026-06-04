class Solution {
public:
    bool squareIsWhite(string coordinates) {
        bool a = true;
        int b = coordinates[0];
        if(( b + coordinates[1]) %2 == 0){ a = false;}
        return a;
    }
};