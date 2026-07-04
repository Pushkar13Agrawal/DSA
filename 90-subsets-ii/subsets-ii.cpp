class Solution {
public:
  void solve(int i, vector<int>& nums, vector<int>& temp,
               vector<vector<int>>& ans) {

        if (i == nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]); //include
        solve(i + 1, nums, temp, ans); 
        temp.pop_back(); // backtrack
        int idx=i+1;
            while(idx<nums.size() && nums[idx]== nums[idx-1]){
              idx++;
            }
        
        solve(idx, nums, temp, ans); //exclude
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0, nums, temp, ans);
        return ans;
    }
};