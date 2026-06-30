class Solution {
public:
    int minOperations(string s) {
        int cnt = 0;
        int cnt1 = 0;
     
        for (int i = 0; i < s.length() ;i++) {
            if (i % 2 == 0 && s[i] != '1') {
                cnt++;
            } else if (i % 2 == 1 && s[i] != '0') {
                cnt++;
            }
        }

    for (int i = 0; i < s.length() ;i++) {
            if (i % 2 == 0 && s[i] != '0') {
                cnt1++;
            } else if (i % 2 == 1 && s[i] != '1') {
                cnt1++;
            }
        }
        return min(cnt1, cnt);
    }
};