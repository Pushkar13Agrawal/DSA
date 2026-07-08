class Solution {
public:
    void solve(vector<vector<int>>& result, vector<int> temp, vector<int>& nums,
               unordered_set<int>& st) {

        int n = nums.size();
        if (temp.size() == n) {
            result.push_back(temp);
            return;
        }
        for (int i = 0; i < n; i++) {
            if (st.find(nums[i]) == st.end()) {
                st.insert(nums[i]);
                temp.push_back(nums[i]);
                solve(result, temp, nums, st);

                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        unordered_set<int> st;
        vector<int> temp;
        int n = nums.size();
        solve(result, temp, nums, st);
        return result;
    }
};