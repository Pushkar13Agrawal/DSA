class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int cnt = 1;
        vector<int> ans;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++) {
            if (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
                cnt++;
            } else {
                ans.push_back(cnt);
                cnt = 1;
            }
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i + 1 < ans.size(); i++) {
            if (ans[i] == ans[i + 1]) {
                return false;
            }
        }
        return true;
    }
};