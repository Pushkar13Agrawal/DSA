class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        if (n == 1) {
            return cost[0];
        }
        int sum = 0;
        int cnt = 0;
        sort(cost.begin(), cost.end(), greater<int>());
        sum = cost[0] + cost[1];
        for (int i = 3; i < n; i++) {

            if (cnt < 2) {
                sum += cost[i];
                cnt++;
            }

            else if (cnt == 2) {
                cnt = 0;
            }
        }

        return sum;
    }
};