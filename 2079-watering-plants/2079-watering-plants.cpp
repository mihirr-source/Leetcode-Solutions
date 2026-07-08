class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int current = capacity;
        int ans = 0;
        for(int i = 0; i<plants.size(); i++){
            if(current == capacity){
                current -= plants[i];
                ans += i+1;
            }
            else if(current >= plants[i] && current!=capacity){
                current -= plants[i];
                ans += 1;
            }
            else if(current < plants[i]){
                current = capacity;
                ans += i+1+i;
                current -= plants[i];
            }
        }
        return ans;
    }
};