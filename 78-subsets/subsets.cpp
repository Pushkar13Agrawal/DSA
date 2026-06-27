class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        ans.push_back({});
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int n = ans.size();
            for (int j = 0; j < n; j++) {
                ans.push_back(ans[j]);
                ans.back().push_back(num);
            }
        }
        return {ans};
    }
};