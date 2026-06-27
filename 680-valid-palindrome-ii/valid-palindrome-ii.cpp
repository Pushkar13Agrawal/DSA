class Solution {
public:
    bool valid(string s, int right, int left) {
        while (left <= right) {
            if (s[left] != s[right]) {
                return false;

            } else
                left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left <= right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else if (s[left] != s[right]) {
                right--;
                if (valid(s, right, left)) {
                    return true;
                } else {
                    right++;
                    left++;
                    return valid(s, right, left);
                }
            }
        }
        return true;
    }
};