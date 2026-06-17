class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.length();
        long long Len = 0;
        for (int i = 0; i < n; i++) {

            if (s[i] == '*') {
                if (Len > 0) {
                    Len--;
                }
            }

            else if (s[i] == '#') {
                Len *= 2;
            } else if (s[i] == '%') {
                continue;
            } else {
                Len++;
            }
        }

        if (Len <= k) {
            return '.';
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '#') {
                Len = Len / 2;
                if (k >= Len) {
                    k = k - Len;
                }
            } else if (s[i] == '*') {
                Len++;
            } else if (s[i] == '%') {
                k = Len - k - 1;
            } else {
                Len--;
            }
            if (k == Len) {
                return s[i];
            }
        }
        return '.';
    }
};