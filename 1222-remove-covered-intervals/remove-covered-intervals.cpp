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
       
        int n = intervals.size();
        int cnt = 1;
        int ans =intervals[0][1];

        for (int i = 0; i < n; i++) {

            if (ans >= intervals[i][1]) {
                continue;
            }
            ans=intervals[i][1];
            cnt++;
        }
        return cnt;
    }
};