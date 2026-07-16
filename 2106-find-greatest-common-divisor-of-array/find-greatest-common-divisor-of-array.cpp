class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        while (min > 0 && max > 0) {
            if (min > max) {
                min = min % max;
            } else {
                max = max % min;
            }
        }
        if (min == 0) {
            return max;
        } else {
            return min;
        }
    }
};