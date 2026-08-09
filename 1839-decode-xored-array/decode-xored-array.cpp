class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int n = encoded.size() + 1;
        int i = 0;
        while (ans.size() < n) {
            int x = ans.back() ^ encoded[i];
            ans.push_back(x);
            i++;
        }
        return ans;
    }
};