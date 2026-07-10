class Solution {
public:
    void solve(vector<int>& nums, vector<int>& temp, map<int, int>& mpp,
               vector<vector<int>>& ans) {
        int n = nums.size();
        if (temp.size() == n) {
            ans.push_back(temp);
            return;
        }
        for (auto& [num, count] : mpp) {
            if (count == 0) {
                continue;
            }

            temp.push_back(num);
            mpp[num]--;
            solve(nums, temp, mpp, ans);
            temp.pop_back();
            mpp[num]++;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<int, int> mpp;
        vector<int> temp;
        vector<vector<int>> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        solve(nums, temp, mpp, ans);
        return ans;
    }
};