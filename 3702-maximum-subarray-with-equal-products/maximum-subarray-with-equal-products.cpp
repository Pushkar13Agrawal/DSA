class Solution {
public:
    int maxLength(vector<int>& nums) {
        int len =0;
        for(int i=0;i<nums.size();i++){
            long long pr =1;
            long long lc =1;
            long long gd =0;
            for(int j=i;j<nums.size();j++){
                if (pr > 25200) break;
                 pr *= nums[j];

                gd = gcd(gd, (long long)nums[j]);
                lc = lcm(lc, (long long)nums[j]);
               if(pr == lc * gd){
                len =max(len,j-i+1);
               }
            }
        }
        return len;
    }
};