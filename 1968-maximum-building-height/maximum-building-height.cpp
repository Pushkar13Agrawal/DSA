class Solution {
public:
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        restrictions.push_back({1, 0});
        restrictions.push_back({n, n - 1});
        sort(restrictions.begin(), restrictions.end());
        int N = restrictions.size();
        //  left to right pass
        for (int i = 1; i < N; i++) {
            int dist = restrictions[i - 1][1] +
                       (restrictions[i][0] - restrictions[i - 1][0]);
            restrictions[i][1] = min(dist, restrictions[i][1]);
        }
        //  right to left pass
        for (int i = N - 2; i >= 0; i--) {
            int dist = restrictions[i + 1][1] +
                       (restrictions[i + 1][0] - restrictions[i][0]);
            restrictions[i][1] = min(dist, restrictions[i][1]);
        }
        int result = 0;
        for (int i = 0; i + 1 < N; i++) {
            int id1 = restrictions[i][0];
            int id2 = restrictions[i + 1][0];

            int h1 = restrictions[i][1];
            int h2 = restrictions[i + 1][1];
            int diff = (id2 - id1);
            int cal = abs(h1 - h2);
            int x = (diff - cal) / 2;
            int peak = max(h2, h1) + x;
            result = max(result, peak);
        }
        return result;
    }
};