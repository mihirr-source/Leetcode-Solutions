class Solution {
public:
    int distances(vector<int>& p1, vector<int>& p2){
        return (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int> ans;
        ans.insert(distances(p1,p2));
        ans.insert(distances(p1,p3));
        ans.insert(distances(p1,p4));
        ans.insert(distances(p2,p3));
        ans.insert(distances(p4,p2));
        ans.insert(distances(p3,p4));
        return !ans.count(0) && ans.size() == 2;
    }
};