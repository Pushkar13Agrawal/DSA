class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0;
        int y = 0;
        while (n > 0) {
            y = (n % 10);
            sum = sum + y;
            if (y != 0) {
                x = (x * 10) + (y);
            }
            n = n / 10;
        }
        long long revx = 0;
        while (x > 0) {
            int k = x % 10;
            revx = (revx * 10) + (k);
            x = x / 10;
        }
        return revx * sum;
    }
};