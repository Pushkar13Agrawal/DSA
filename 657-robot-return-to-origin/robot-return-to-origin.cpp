class Solution {
public:
    bool judgeCircle(string moves) {
        int cnt = 0;
        int cnt2 = 0;

        int n = moves.length();
        for (int i = 0; i < n; i++) {
            if (moves[i] == 'L') {
                cnt--;

            } else if (moves[i] == 'R') {
                cnt++;

            } else if (moves[i] == 'U') {
                cnt2++;
            } else if (moves[i] == 'D') {
                cnt2--;
            }
        }
        return cnt == 0 && cnt2 == 0;
    }
};