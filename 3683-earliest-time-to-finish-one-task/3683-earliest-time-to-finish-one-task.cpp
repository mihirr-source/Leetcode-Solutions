class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini = tasks[0][0] + tasks[0][1];
        for(int i = 0; i<tasks.size(); i++){
            mini  = min(tasks[i][0] + tasks[i][1], mini);
        }
        return mini;
    }
};