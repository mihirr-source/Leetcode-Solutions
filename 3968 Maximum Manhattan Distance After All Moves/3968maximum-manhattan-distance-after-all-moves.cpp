class Solution {
public:
    int maxDistance(string moves) {
        vector<int> s = {0,0};
        int count = 0;
        for(int i = 0; i<moves.size() ; i++){
            if(moves[i] == 'U' ){
                s[1] +=1;
            }
            else if(moves[i] == 'D' ){
                s[1] -=1;
            }
            else if(moves[i] == 'L' ){
                s[0] -= 1;
            }
            else if(moves[i] == 'R'){
                s[0] +=1;
            }
            else {
                count++;
            }
        }
        if(s[0]<0){
            s[0] -= count;
        }
        else if(s[0] >= 0){
            s[0] += count;
        }
        return abs(s[0])+abs(s[1]);
    }
};