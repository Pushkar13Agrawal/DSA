class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        int n = tasks.size();
        for (int i = 0; i < n; i++) {
            ans = min(ans, tasks[i][0] + tasks[i][1]);
        }
        return ans;
    }
};