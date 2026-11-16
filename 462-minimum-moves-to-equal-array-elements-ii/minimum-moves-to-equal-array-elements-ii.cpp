class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid=(nums.size()-1)/2;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+abs(nums[i]-nums[mid]);
        }
        return ans;
    }
};