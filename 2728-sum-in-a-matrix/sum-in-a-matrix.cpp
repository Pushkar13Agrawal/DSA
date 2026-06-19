class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
    for(int i=0;i<n;i++){
       sort(nums[i].begin(),nums[i].end());
    }
        int largest =0;
        int sum=0;
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                largest=max(largest,nums[i][j]);
            }
            sum+=largest;
            largest=0;
        }
        return sum;
    }
};