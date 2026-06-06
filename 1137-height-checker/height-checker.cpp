class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> expected(n);
        for (int i = 0; i < n; i++) {
            expected[i] = heights[i];
        }
        int cnt = 0;
        sort(expected.begin(), expected.end());
        for (int i = 0; i < n; i++) {
            if (expected[i] != heights[i])
                cnt++;
        }
        return cnt;
    }
};