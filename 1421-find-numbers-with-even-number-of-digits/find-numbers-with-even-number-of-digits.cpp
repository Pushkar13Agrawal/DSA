class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
         int cnt2=0;
        for(int i=0;i<nums.size();i++){
            cnt2=0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                cnt2++;
            }
            if(cnt2%2==0){
                cnt++;
            }
        }
        return cnt;
    }
};