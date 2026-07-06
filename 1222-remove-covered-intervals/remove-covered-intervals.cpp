class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        auto lambda = [](vector<int>& vec1, vector<int>& vec2) {
            if (vec1[0] == vec2[0]) {
                return vec1[1] > vec2[1];
            }
            return vec1[0] < vec2[0];
        };
        sort(intervals.begin(), intervals.end(), lambda);
        vector<vector<int>> ans;
        int n = intervals.size();
        int cnt = 0;
        ans.push_back(intervals[0]);

        for (int i = 0; i < n; i++) {

            if (ans.back()[0] <= intervals[i][0] &&
                ans.back()[1] >= intervals[i][1]) {
                continue;
            }
            ans.push_back(intervals[i]);
        }
        return ans.size();
    }
};