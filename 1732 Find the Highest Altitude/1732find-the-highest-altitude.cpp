class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0;
        vector<int> heights;
        for(int i = 0; i<gain.size(); i++){
            alt += gain[i];
            heights.push_back(alt);
        }
        sort(heights.begin(), heights.end());
        return max(0,heights[heights.size()-1]);
    }
    
};