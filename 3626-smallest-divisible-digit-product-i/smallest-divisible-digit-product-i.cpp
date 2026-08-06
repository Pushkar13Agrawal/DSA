class Solution {
public:
    int smallestNumber(int n, int t) {
        int div = 1;
        int k = 0;
        for (int i = n; i <= 100; i++) {
            k = i;
            div = 1;
            while (k > 0) {
                div = (k % 10) * div;
                k = k / 10;
            }
            if (div % t == 0)
                return i;
        }
        return 0;
    }
};