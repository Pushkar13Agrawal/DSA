class Solution {
public:
    vector<string> ans;
    bool valid(string curr) {
        int cnt = 0;
        for (int i = 0; i < curr.length(); i++) {
            if (curr[i] == '(') {
                cnt++;
            } else {
                cnt--;
                if (cnt < 0)
                    return false;
            }
        }
        return cnt == 0;
    }
    void solve(string& curr, int n) {
        if (curr.length() == 2 * n) {
            if (valid(curr)) {
                ans.push_back(curr);
            }
            return;
        }
        curr.push_back('(');
        solve(curr, n);
        curr.pop_back();
        curr.push_back(')');
        solve(curr, n);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";
        solve(curr, n);
        return ans;
    }
};