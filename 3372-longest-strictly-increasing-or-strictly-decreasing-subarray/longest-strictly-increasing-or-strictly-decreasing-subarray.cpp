class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 1;
        int dec = 1;
        int len = 1;
        for (int i = 0; i + 1 < nums.size(); i++) {
            if (nums[i] < nums[i + 1]) {
                inc+=1;
                len=max(inc,len);
                dec=1;
            }
           

          else   if (nums[i] > nums[i + 1]) {
                dec++;
                len=max(len,dec);
               inc=1;
            }
            else {
    inc = 1;
    dec = 1;
}

        }
        return len;
    }
};