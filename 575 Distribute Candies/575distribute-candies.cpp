class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int count = 1;
        sort(candyType.begin(), candyType.end());
        for(int i = 1; i< candyType.size(); i++){
            if(candyType[0] != candyType[i]){
                count++;
                candyType[0] = candyType[i];
            }
        }
        if(count < candyType.size() /2){
            return count;
        }
        else{
            return candyType.size() / 2;
        }
        
    }
};