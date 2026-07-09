class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        unordered_set<int> st;
        int n = nums.size();

        while (right < n) {
            if (abs(right - left) > k) {
                st.erase(nums[left]);
                left++;
            }

            if (st.find(nums[right]) != st.end()) {
                return true;
            }

            st.insert(nums[right]);
            right++;
        }
        return false;
    }
};