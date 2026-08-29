class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int arrsum=0;
        int digsum=0;
        for(int i=0;i<nums.size();i++){
            arrsum+=nums[i];
            while(nums[i]>0){
                digsum=digsum+(nums[i]%10);
                nums[i]=nums[i]/10;
            }
        }
        return abs(arrsum-digsum);
    }
};