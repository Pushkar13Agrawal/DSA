class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        int ans = 0;
        if (mpp.find(1) != mpp.end()) {
            if (mpp[1] % 2 == 1) {
                ans += mpp[1];
            } else {
                ans += mpp[1] - 1;
            }
        }
        for (auto it : mpp) {
            long long x = it.first;
            int currlen = 0;
            if (x == 1)
                continue;
            while (mpp.find(x) != mpp.end() && mpp[x] > 1) {
                currlen += 2;
                x = x * x;
            }
            if (mpp.find(x) != mpp.end() && mpp[x] == 1) {
                currlen += 1;
            } else {
                currlen -= 1;
            }
            ans = max(ans, currlen);
        }
        return ans;
    }
};