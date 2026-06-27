class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        map<int, int> mpp;
        int preSum = 0;
        mpp[0] = 1;
        long long ans = 0;
        int leftvalid = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                leftvalid += mpp[preSum];
                preSum++;
            } else {
                preSum--;
                leftvalid -= mpp[preSum];
            }
            ans += leftvalid;
            mpp[preSum]++;
        }
        return ans;
    }
};