class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = 0;
        for(int i = 0; i+1<requests.size(); i++){
            ans += abs(requests[i]-requests[i+1]);
        }
        return ans+requests[0];
    }
};