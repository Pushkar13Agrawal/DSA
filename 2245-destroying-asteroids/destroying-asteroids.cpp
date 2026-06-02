class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long sum = mass;
        int n = asteroids.size();
        sort(asteroids.begin(), asteroids.end());
        if (n == 1 && mass < asteroids[0]) {
            return false;
        }
        for (int i = 0; i < n; i++) {
            if (sum < asteroids[i]) {
                return false;
            } else {
                sum += asteroids[i];
            }
        }

        return true;
    }
};