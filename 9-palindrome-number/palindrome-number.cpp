class Solution {
public:
    bool isPalindrome(int x) {
        string ans = to_string(x);
        int right = ans.length() - 1;
        int left = 0;
        for (int i = 0; i < ans.length(); i++) {
            if (ans[left] != ans[right])
                return false;
            else {
                left++;
                right--;
            }
        }
        return true;
    }
};