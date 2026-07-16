class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi = INT_MIN;
       
        for (int i = 0; i < nums.size(); i++) {
            maxi = max(maxi, nums[i]);
           nums[i]=gcd(maxi, nums[i]);
        }
        sort(nums.begin(), nums.end());
        long long sum = 0;
        int i = 0, j = nums.size() - 1;
        while (i < j) {
            sum += gcd(nums[i], nums[j]);
            i++;
            j--;
        }
        return sum;
    }
};