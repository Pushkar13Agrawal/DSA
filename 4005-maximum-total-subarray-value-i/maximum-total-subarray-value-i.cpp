class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxele=*max_element(nums.begin(),nums.end());
        long long minele=*min_element(nums.begin(),nums.end());
       long long ans= (maxele-minele);
        ans=ans*k;
        return ans;
    }
};