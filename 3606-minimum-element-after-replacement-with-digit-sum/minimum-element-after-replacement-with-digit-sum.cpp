class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = 0;
            while (nums[i] > 0) {
                sum += nums[i] % 10;
                nums[i] = nums[i] / 10;
            }
            nums[i] = sum;
        }
        int ans = *min_element(nums.begin(), nums.end());
        return ans;
    }
};